/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99711
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 -= ((((((/* implicit */int) (signed char)-5)) != (-1172818622))) ? (min((max((3524601274U), (((/* implicit */unsigned int) arr_6 [i_0 - 1] [(unsigned short)16] [(short)8])))), (((/* implicit */unsigned int) (unsigned short)41438)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [0]))))));
                var_12 = ((/* implicit */unsigned short) 1172818622);
                var_13 = ((/* implicit */_Bool) (+(-1172818632)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (max((((/* implicit */unsigned long long int) -898942951057018293LL)), (3160623794627190702ULL)))))) & (((/* implicit */int) ((((/* implicit */int) ((-1172818621) == (((/* implicit */int) (signed char)0))))) == (((/* implicit */int) var_1)))))));
}
