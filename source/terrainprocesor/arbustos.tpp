<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>trees_1</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\Equal_Islands\source\shapefiles\area2.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="25"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="15"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="cliff_stone_big_lc_f"/>
                    <Parameter Name="PROB" Value="5"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="25"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_cyathea_f"/>
                    <Parameter Name="PROB" Value="5"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="20"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_calochlaena_f"/>
                    <Parameter Name="PROB" Value="6"/>
                    <Parameter Name="MINHEIGHT" Value="120"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="25"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_treestump_natural_small"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="55"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_fallentrunk_clear_lc"/>
                    <Parameter Name="PROB" Value="4"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="35"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_fallenbranch_lc_f"/>
                    <Parameter Name="PROB" Value="4"/>
                    <Parameter Name="MINHEIGHT" Value="120"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="35"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_leucaena_f"/>
                    <Parameter Name="PROB" Value="5"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="25"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_cestrum_f"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="150"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\Equal_Islands\data\roads\roads.shp</Shapefile>
            <TaskName>Mask: Linear</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="20"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\Equal_Islands\source\shapefiles\tree_mask.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
