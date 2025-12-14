/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89992
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned char)96))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(arr_1 [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [12LL] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 549755781120ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))) <= (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2] [i_2])) | (((/* implicit */int) arr_7 [i_2]))))), (((((/* implicit */_Bool) arr_0 [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9)))))));
        arr_11 [i_2] [i_2] = (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) % (arr_10 [i_2]))), (((/* implicit */unsigned int) var_8))))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_0);
}
