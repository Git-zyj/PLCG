/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7879
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
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((var_9) == (((/* implicit */int) var_8)))))) == (((((/* implicit */_Bool) (short)-6495)) ? (((/* implicit */int) (short)6495)) : (((/* implicit */int) (_Bool)1))))));
    var_17 = ((/* implicit */short) var_13);
    var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)36875)) ? (((/* implicit */int) (short)6495)) : (((/* implicit */int) (short)-9820)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13181)), ((unsigned short)28668))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((max((((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_1])))), ((+(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (unsigned short)28681))));
                var_19 = ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((~(((/* implicit */int) ((arr_8 [i_0] [i_2]) >= (((/* implicit */int) var_7))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) (short)-17347)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (var_2))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) var_3)))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) % ((+(var_1)))))) ? (((((/* implicit */_Bool) max((9669139792032489529ULL), (((/* implicit */unsigned long long int) arr_7 [16LL] [i_1] [16LL] [i_1]))))) ? (var_4) : (((/* implicit */long long int) ((int) (unsigned char)240))))) : (((/* implicit */long long int) (~((~(arr_4 [i_0] [i_0]))))))));
                }
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */short) ((var_1) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13181)) / (((/* implicit */int) arr_5 [i_0]))))) ? (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (short)16761)) : (arr_8 [i_0] [i_1]))) : (((/* implicit */int) max(((unsigned short)36868), (((/* implicit */unsigned short) (unsigned char)124))))))))));
            }
        } 
    } 
}
