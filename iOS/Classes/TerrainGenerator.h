//
//  TerrainGenerator.h
//  prototype
//
//  Created by Ari Ronen on 10/23/10.
//  This project is licensed under the GNU General Public License v3. See https://github.com/JosephTheEngineer/Eden for more info.
//

#ifndef Eden_TerrainGenerator_h
#define Eden_TerrainGenerator_h


#import "Terrain.h"

class TerrainGenerator{
public:
    TerrainGenerator(Terrain* parent);
    void generateColumn(int x,int z, BOOL bgthread);
    void generateEmptyColumn(int cx,int cz);
    void generateCloud();
    void placeTree(int x,int z,int y);
    
   
	int LEVEL_SEED;
    bool genCaves;
};

float noise3(float vec[3]);
float noise2(float vec[2]);
void tgenInit();


#endif
