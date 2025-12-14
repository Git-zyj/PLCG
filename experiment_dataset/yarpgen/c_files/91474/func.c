/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91474
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) (short)-2614)))), ((!(((/* implicit */_Bool) var_1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_7))))));
        var_11 = ((/* implicit */short) var_7);
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_1 [i_0]) : ((+(arr_1 [(unsigned short)7])))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) 5825888092399356671ULL);
                                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6728051043006719019ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) == (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_4)))) ? (max((var_8), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1])))))))));
                                arr_17 [i_2] [i_2] [i_1] [i_5] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_4 + 1] [i_2] [i_5]))));
                                arr_18 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((var_4) > (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)-32766)) : ((-(((/* implicit */int) (short)(-32767 - 1))))))))));
                                arr_19 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max((max((arr_7 [i_4] [i_5]), (((/* implicit */long long int) arr_6 [i_1])))), (8957985564525156733LL))), (min((((arr_12 [i_2] [i_2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28719))) : (arr_9 [14LL] [i_4] [i_1]))), (((arr_14 [i_5] [i_2] [i_3] [i_4] [i_5] [i_5]) ? (arr_7 [i_1] [i_3]) : (arr_9 [i_5] [i_2] [i_1])))))));
                            }
                        } 
                    } 
                    arr_20 [i_3] = ((/* implicit */unsigned int) (((~((+(((/* implicit */int) (_Bool)0)))))) * ((+(((/* implicit */int) (short)-28719))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240))))), (((((/* implicit */int) max(((short)-17585), (arr_6 [i_1])))) * ((-(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_3])))))))))));
                }
            } 
        } 
    } 
}
