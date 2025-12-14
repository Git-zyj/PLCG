/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82833
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [13] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 |= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) arr_1 [i_0] [i_0]))))), (max((((/* implicit */unsigned short) arr_4 [i_0] [(unsigned short)4])), (arr_5 [(signed char)11] [(signed char)11] [(signed char)11]))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)-32763), (arr_0 [(signed char)9] [(signed char)9])))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) | (arr_7 [i_0] [(signed char)13] [i_2] [(signed char)13]))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1])), (min((((/* implicit */unsigned short) (short)-32766)), (arr_1 [i_2] [i_0]))))), (((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_2])))))));
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_2 [i_1] [i_1])))) ? (arr_7 [i_2] [i_1] [8LL] [8LL]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) || (((/* implicit */_Bool) (short)-32766))))))))));
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) != (((/* implicit */int) arr_4 [i_0] [i_2]))))), (arr_6 [i_0] [i_1] [i_0]))))));
            }
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_11 [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0] [i_3] [i_3])) != ((+(((/* implicit */int) arr_4 [i_0] [i_3])))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)134)))), ((!(arr_10 [i_3] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (short)32763)))) && (((/* implicit */_Bool) arr_5 [(unsigned char)0] [(unsigned char)0] [i_3])))))));
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((-1588641717363818698LL), (((/* implicit */long long int) (short)-32763))))))))));
                arr_12 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */_Bool) min((max((((long long int) (unsigned short)63508)), (((/* implicit */long long int) (short)32765)))), (((/* implicit */long long int) max((min((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_5 [i_3] [i_1] [i_0]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_0]))))))))));
            }
        }
    }
}
