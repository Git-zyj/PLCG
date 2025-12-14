/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69069
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
    var_11 = ((/* implicit */unsigned short) (+(469762048LL)));
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_2 + 1]))))));
                        arr_11 [i_0] [i_2] [i_2 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) var_0);
                        arr_12 [i_2] [i_3] = ((/* implicit */signed char) max((arr_7 [i_0] [i_1 + 2] [i_1] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_3]), (arr_9 [i_2])))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (arr_6 [i_3] [i_3] [i_2])))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = var_1;
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((max((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_2)))) / (((/* implicit */unsigned long long int) -2136215939)))))));
        arr_14 [i_0] [i_0] = ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) -9223372036854775802LL)), (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) < (((/* implicit */unsigned long long int) (+((-(2136215938))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) arr_20 [i_4] [i_4]);
                    arr_23 [(_Bool)1] [i_5] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5240)) >= (2136215939)))), (((((/* implicit */unsigned long long int) 1165238740U)) / (arr_18 [i_6])))));
                }
            } 
        } 
        arr_24 [i_4] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)86)), (-2136215929)));
        arr_25 [16] |= ((/* implicit */short) max((5328422069292398848ULL), (((/* implicit */unsigned long long int) (signed char)85))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4 + 2] [9ULL] [i_4] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((~((+(arr_17 [i_4] [i_4] [i_4])))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 2136215939)) < (9223372036854775808ULL)));
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2136215922)) || (((/* implicit */_Bool) 8936830510563328ULL))))), ((~(((unsigned long long int) arr_21 [(signed char)14] [(_Bool)1] [(_Bool)1] [i_7]))))));
    }
}
