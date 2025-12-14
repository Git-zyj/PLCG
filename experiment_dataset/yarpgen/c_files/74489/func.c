/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74489
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3917297767864000274LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (3917297767864000278LL)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_15 [i_1] [i_1] [(unsigned short)12] [i_3] [5ULL] [(unsigned char)14] = ((/* implicit */_Bool) ((int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_2 - 1] [i_1 - 2]))));
                            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_5 [(_Bool)1] [i_1] [i_2])));
                            arr_17 [i_1] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_10 = ((/* implicit */_Bool) var_7);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 2307598994U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_5)) - (25470)))))))) : (3917297767864000274LL)));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_4] [i_4] [i_4]));
        arr_21 [i_4] = ((/* implicit */unsigned long long int) var_2);
    }
}
