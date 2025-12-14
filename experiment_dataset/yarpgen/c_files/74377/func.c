/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74377
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)19186)))))) | (((long long int) -5672334768150829460LL))))) ? (((/* implicit */int) var_3)) : (max((max((var_0), (((/* implicit */int) (short)19208)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)118)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19190)))))))) & ((-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) != (((/* implicit */int) (unsigned char)99)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_7 [i_2] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)0))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((min((15430080780363442886ULL), (((/* implicit */unsigned long long int) (unsigned short)19993)))), (((/* implicit */unsigned long long int) max((arr_2 [i_2]), (arr_2 [i_1])))))))));
                    var_12 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) * (((18214420870431450052ULL) - (((/* implicit */unsigned long long int) -333357325578296221LL)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                    arr_8 [(unsigned char)1] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (arr_2 [i_0])));
                    var_13 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)122)) % (((/* implicit */int) (unsigned char)99))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) 3381208434U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)57))))) / (-1831759495606572633LL)))));
                }
            }
        } 
    } 
}
