#pragma once
#include "DumpInfo.h"

namespace GPP
{
    extern DumpBase* CreateDumpMeshConsolidationLaplaceSmooth(void);

    class DumpMeshConsolidationLaplaceSmooth : public DumpBase
    {
    public:
        DumpMeshConsolidationLaplaceSmooth();
        ~DumpMeshConsolidationLaplaceSmooth();

        virtual void LoadDumpFile(const std::string& fileName);
        virtual void Run(void);
        virtual TriMesh* GetTriMesh(void);

        void DumpApiInfo(const ITriMesh* triMesh, Real percentage, Int times, bool keepBoundary);

    private:
        TriMesh* mpTriMesh;
        Real mPercentage;
        Int mTimes;
        bool mKeepBoundary;
    };

    
    extern DumpBase* CreateDumpMeshConsolidationMakeManifold(void);

    class DumpMeshConsolidationMakeManifold : public DumpBase
    {
    public:
        DumpMeshConsolidationMakeManifold();
        ~DumpMeshConsolidationMakeManifold();

        virtual void LoadDumpFile(const std::string& fileName);
        virtual void Run(void);
        virtual TriMesh* GetTriMesh(void);

        void DumpApiInfo(const ITriMesh* triMesh);

    private:
        TriMesh* mpTriMesh;
    }; 


    extern DumpBase* CreateDumpMeshConsolidationGeometry(void);

    class DumpMeshConsolidationGeometry : public DumpBase
    {
    public:
        DumpMeshConsolidationGeometry();
        ~DumpMeshConsolidationGeometry();

        virtual void LoadDumpFile(const std::string& fileName);
        virtual void Run(void);
        virtual TriMesh* GetTriMesh(void);

        void DumpApiInfo(const ITriMesh* triMesh, Real angleTol, Real edgeLengthTol);

    private:
        TriMesh* mpTriMesh;
        Real mAngleTol;
        Real mEdgeLengthTol;
    }; 
}