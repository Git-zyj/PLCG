/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94447
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
    var_18 = ((unsigned char) (unsigned char)112);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_3 [i_0 - 1] [i_0 + 2] [i_1]))), (((/* implicit */long long int) (signed char)97))));
            arr_5 [i_1] [1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)141)) <= (((/* implicit */int) (signed char)73))))), (((unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)148)))))));
            var_20 = (unsigned char)155;
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_0 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-30748)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30517))) : ((+(-3562914825998523832LL))))))));
            var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) arr_3 [i_0 - 1] [i_0] [i_0]))), (((arr_3 [i_0 - 2] [i_0] [i_0 - 1]) - (arr_3 [i_0 - 2] [(signed char)11] [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)131)) || (((min((14253256566451198169ULL), (((/* implicit */unsigned long long int) 0U)))) > (((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 142273348)) || (((/* implicit */_Bool) var_12))));
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)0]))) : (5465983410603452645LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)4))))), ((-(4193487507258353447ULL)))))));
                        arr_18 [i_4] [i_2] [i_3] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) (~(31324126)));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) 4050403367176735414ULL);
        }
        arr_19 [(_Bool)1] = ((/* implicit */signed char) (short)2200);
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_0 [(signed char)16])), (min((var_16), (-480815733700637292LL))))), (((/* implicit */long long int) ((((16383) - (((/* implicit */int) arr_12 [i_0] [i_0])))) | (((/* implicit */int) min(((unsigned short)34436), (((/* implicit */unsigned short) (short)2048)))))))))))));
    }
}
