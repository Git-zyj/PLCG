/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88797
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
    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 6478658714856892360LL))))), (((((/* implicit */_Bool) 6478658714856892370LL)) ? (7614847026790745530LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)147)), (18381562568206957553ULL)));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3242)) >> (((((/* implicit */int) var_2)) - (165)))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0 - 1] [i_1] [i_1]))), (((((/* implicit */_Bool) 268435456U)) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_1])) && (((/* implicit */_Bool) 2068235731)))))) - (5342448325446818820ULL)))));
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) var_0);
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned short) max((arr_7 [i_2] [(short)13]), ((signed char)16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) | (65181505502594078ULL))))))))))));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) >= (((/* implicit */int) arr_8 [i_3]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551604ULL))))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) var_0)) & (65181505502594063ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)28)) & (-1628078234))), (((/* implicit */int) (signed char)22)))))));
        arr_12 [i_3] [i_3] = ((/* implicit */int) arr_8 [i_3]);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_17 [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_16 [(signed char)0] [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6478658714856892360LL)))))));
            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [(unsigned short)5] [i_3])) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_3])) : (((/* implicit */int) (unsigned short)3244)))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((65181505502594063ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_15 [i_3] [i_4]))))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_8 [i_3])))))));
            var_19 = ((/* implicit */int) ((((long long int) 1959972439)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (min((-3796506103359736541LL), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))))));
        }
    }
}
