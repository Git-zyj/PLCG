/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8962
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6115)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745))) : (arr_1 [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-22485)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1] [i_2]))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (_Bool)0))), (min((((/* implicit */int) (short)-1)), (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 = ((((/* implicit */_Bool) (+(arr_10 [i_2] [14U] [i_3 - 2] [i_4] [14U] [i_4])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]) : (arr_10 [i_0] [i_1] [i_3 - 1] [i_3 - 1] [i_3] [(signed char)16]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3 + 1] [i_3] [i_3 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27244))) : (18446744073709551615ULL))));
                                arr_13 [i_4] [i_3 - 2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)172))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((arr_8 [i_4]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((1ULL), (((/* implicit */unsigned long long int) (short)-32746))));
            arr_18 [i_0] = ((/* implicit */unsigned char) min((((signed char) (signed char)(-127 - 1))), (((/* implicit */signed char) ((var_8) < (arr_10 [i_0] [(unsigned char)14] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (long long int i_6 = 4; i_6 < 16; i_6 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) (signed char)120)) : (((((/* implicit */int) arr_2 [i_0] [i_6 + 2] [16U])) - (((/* implicit */int) arr_2 [i_6 + 2] [i_6 - 1] [i_6])))))))));
            var_13 &= ((/* implicit */unsigned long long int) (short)-8058);
        }
        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            arr_25 [i_0] = (signed char)75;
            arr_26 [i_0] [i_0] [i_7] = ((/* implicit */long long int) var_8);
        }
        arr_27 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 54043195528445952ULL)) ? (1099511627264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9085))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0])))))) ? (2051819855) : ((~(((/* implicit */int) (signed char)117)))))))));
    }
    var_14 = ((/* implicit */_Bool) -2051819855);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned char)136))))) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
}
