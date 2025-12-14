/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98749
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_5 [i_0] [15ULL] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-127))))));
            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_0 [10U] [i_0 + 1])))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (short)-16384))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1]))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) % (((/* implicit */int) var_16))))), (317184800U))));
        }
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2 + 1] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_6 [i_0] [i_0])))))) : (((unsigned long long int) arr_1 [i_0 - 1] [i_2 + 3]))));
            var_22 ^= ((unsigned short) ((((/* implicit */int) arr_7 [i_2 + 2])) + (((/* implicit */int) var_5))));
            arr_9 [i_0] = ((/* implicit */short) ((unsigned int) arr_3 [i_0]));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */short) ((unsigned int) (signed char)-127));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_18 [(short)7] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9015))) : (4171669887297338434ULL)));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_23 = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63474));
                            var_24 = ((/* implicit */unsigned long long int) ((short) var_13));
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_25 = var_7;
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) var_15);
                            arr_24 [(signed char)3] [1] [i_4] [i_5] [3U] [i_0] = ((unsigned long long int) var_8);
                        }
                    }
                } 
            } 
        }
        for (int i_8 = 3; i_8 < 16; i_8 += 3) 
        {
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) var_1))), (var_6)));
            arr_28 [i_0] = ((/* implicit */signed char) (short)19055);
            arr_29 [i_0] [i_0] [(unsigned short)2] = ((max((arr_1 [i_0 - 1] [7ULL]), (((/* implicit */unsigned int) arr_14 [2U] [(unsigned short)5])))) > (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_20 [i_0] [8ULL] [4] [12] [(short)4])) ? (((/* implicit */int) (unsigned short)26180)) : (((/* implicit */int) var_8))))))));
            arr_30 [3] [i_0] [i_8] = ((/* implicit */signed char) var_2);
            var_26 -= arr_16 [(unsigned short)2] [i_8] [(unsigned short)15];
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_15 [i_0] [i_0 - 1] [i_0 + 1] [1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)15] [i_0 - 1] [i_0 + 1] [(unsigned short)15]))))) : (((/* implicit */int) ((unsigned short) arr_15 [(short)15] [i_0 + 2] [i_0 - 1] [(short)6])))));
        var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (unsigned short)63475)))), (((/* implicit */int) arr_14 [i_0] [i_0]))));
        var_29 = ((/* implicit */signed char) ((unsigned long long int) ((arr_1 [(unsigned short)5] [i_0]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))))));
    }
    var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10302)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) min((var_12), (((/* implicit */short) (signed char)-92))))) : (((int) 2418373155U)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((var_18) * (((/* implicit */int) var_10)))))))));
}
