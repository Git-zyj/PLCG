/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_19)) * (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-2147483617) : (((/* implicit */int) var_18)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) 2078200668U);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0 + 2])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [7LL] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_15) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) 2078200666U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-68)))))) / (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1])))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((int) ((long long int) arr_3 [i_1] [6ULL])));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((max((arr_3 [i_1] [i_2]), (((/* implicit */unsigned long long int) 2216766631U)))), (((/* implicit */unsigned long long int) ((unsigned int) var_13)))));
            var_23 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_8 [i_1] [i_2])) + (((/* implicit */int) (unsigned short)2512)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_1])), (arr_4 [i_1] [i_1]))))));
            arr_10 [(unsigned short)5] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)87))))));
            var_24 = 2078200645U;
        }
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            var_25 *= ((/* implicit */signed char) var_9);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
            {
                var_26 *= ((/* implicit */unsigned short) arr_15 [i_1] [i_3 - 1] [i_3 + 1]);
                var_27 = (_Bool)1;
                var_28 = ((/* implicit */signed char) arr_15 [i_4] [i_3 + 2] [i_4]);
                arr_18 [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) arr_15 [i_4] [i_3 + 1] [(unsigned char)11]);
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) 2216766615U);
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1])) >= (((/* implicit */int) arr_19 [i_1] [i_3] [i_3 - 1])))))) > (min((var_1), (((/* implicit */long long int) (signed char)0))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max(((+(((long long int) (_Bool)1)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_1] [i_3]))))))))));
                    arr_25 [i_5] = ((/* implicit */unsigned long long int) 0U);
                    var_32 = ((/* implicit */_Bool) (+(3125270183U)));
                    var_33 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) var_5)))));
                }
                arr_26 [i_5] = min((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_1] [i_1] [i_3] [i_5] [i_5]))))), ((+(var_1))))), (((/* implicit */long long int) max((var_0), (((/* implicit */int) (unsigned char)156))))));
            }
        }
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            var_34 = ((/* implicit */short) (+((+((+(((/* implicit */int) var_17))))))));
            arr_29 [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1] [i_7 + 1])) || (((/* implicit */_Bool) (unsigned short)2524))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        var_35 = ((/* implicit */int) arr_24 [(_Bool)1] [i_1] [(unsigned short)11] [i_1] [i_1]);
    }
    var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
}
