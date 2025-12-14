/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66513
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-18)) + (((/* implicit */int) (signed char)-6))));
        var_18 = ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))));
            var_20 = ((/* implicit */int) var_13);
            var_21 = ((/* implicit */_Bool) (~((~(var_5)))));
            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
            arr_7 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_12)) : (var_13)))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_17)) + (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))));
            arr_11 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) * (3199046686803662703ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            var_26 = ((/* implicit */int) min((var_26), ((-(((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_16)), (var_17))) * (((((/* implicit */int) var_15)) / (var_17)))))) < ((+(var_13))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))), (((unsigned long long int) var_10)))) | ((-(((((/* implicit */unsigned long long int) var_12)) - (var_3))))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((((((long long int) (signed char)17)) >> (((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) var_17)))) - (9852047018146901232ULL))))) / (((/* implicit */long long int) min((((var_12) ^ (var_17))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))))))))));
        var_30 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)17)))) ? ((+(((/* implicit */int) var_16)))) : (var_17))) < (((/* implicit */int) var_8))));
    }
    var_31 = ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_0)))))) % (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) % (var_7))))))));
                    var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_6))))));
                    arr_24 [i_5] [i_6] [i_6] = (-((~((~(var_10))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */long long int) var_10);
}
