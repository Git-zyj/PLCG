/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61126
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)77)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0]), (arr_5 [i_2 - 3] [i_1] [i_0] [9ULL])))) != (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_0 - 1])), ((unsigned char)8)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_2 - 3] [i_1] [i_3]))) & (arr_7 [i_3] [4U] [i_1] [i_1]))))))) : (arr_2 [i_0])));
                                arr_13 [i_3] [i_0 + 3] [i_3] [i_0 + 3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_11 [i_3] [i_2 - 3] [i_2] [i_2 - 1] [i_3]))))));
                                var_12 *= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_2]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)10798)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_2]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 3] [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_0)))) ? (arr_7 [i_0] [i_1] [i_0] [i_2]) : (max((var_4), (((/* implicit */unsigned int) var_5)))))))))));
                    arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 4] [i_0] [i_0] [i_0])) : (arr_10 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_0]))) * (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [7ULL])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 2] [i_1] [i_0] [i_0 + 1] [i_0 + 1]))))))) ? (((max((arr_0 [i_0 + 2]), (arr_1 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 1] [i_0] [i_1] [i_1] [i_0]))))) : (((arr_5 [i_0] [i_1] [i_2] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (1984))))) : (max((((arr_11 [i_0] [12] [i_2] [i_1] [i_2]) ? (((/* implicit */int) (short)28944)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)5] [i_2])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (((var_4) * (var_4)))))));
}
