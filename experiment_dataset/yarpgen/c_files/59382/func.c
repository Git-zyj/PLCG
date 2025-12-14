/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59382
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6891634084703886542ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) var_5)) : (max((9223372036854775807LL), (((/* implicit */long long int) var_7))))))) ? (((((int) arr_2 [i_0] [i_1])) % (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned short)14620)))));
                arr_5 [i_0] [i_0] [i_1] = var_4;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775802LL)))))));
                            var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 623310810U)) ? (464749259U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((9223372036854775798LL) >> (((((/* implicit */int) var_0)) + (136))))) > (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9223372036854775806LL))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 + 2])) + (3))) - (2)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_9 [i_1] [(unsigned short)10] [13LL] [i_3] [(_Bool)1]))))))));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(arr_4 [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-56)), (18290374524797288006ULL))))));
                var_16 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)63488))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4])))))) || (((/* implicit */_Bool) ((549747425280ULL) + (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_1)), (-750253153)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_6 [i_6] [i_6] [i_6] [i_6]))))))));
                    var_19 = ((((/* implicit */_Bool) ((unsigned short) (+(-7394554453585204266LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [i_5] [i_6]))) : (arr_14 [i_4]));
                    arr_22 [i_4] [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)238))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19199))) ^ (986285515895506744ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -9223372036854775803LL)))))))));
                    arr_23 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_14 [i_4])))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_3)))))) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_6] [9ULL])) ? (arr_16 [i_4]) : (2063511603U)))) ? (((/* implicit */unsigned int) 263918112)) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (2916016149U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))))))) ? (3ULL) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (131071LL)))) ? (arr_6 [i_6] [i_4] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-750253164))))))))))));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_21 += ((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) / (17216595811935091673ULL))) >> (((9223372036854775807LL) - (9223372036854775788LL)))))));
        var_22 = ((/* implicit */unsigned short) arr_1 [i_7]);
        var_23 = ((/* implicit */long long int) arr_9 [i_7] [i_7] [19] [19] [i_7]);
        arr_27 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 263918112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (3461148712U)));
        var_24 |= ((/* implicit */unsigned char) var_6);
    }
    var_25 = ((/* implicit */unsigned int) (!(var_1)));
    var_26 = ((/* implicit */unsigned short) ((unsigned char) var_1));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 0U)) <= (-2029670319606008352LL)));
}
