/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92886
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_2 [i_0] [i_2] [i_1 + 1]))));
                    var_21 -= ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_1 [i_1 - 1])), (arr_5 [1ULL] [i_1 + 1]))) % (((/* implicit */unsigned int) var_16))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0])))), (8444249301319680ULL))))));
                }
            } 
        } 
        var_23 ^= min((((/* implicit */unsigned long long int) var_17)), (var_6));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_24 ^= ((/* implicit */unsigned long long int) (~(((unsigned int) arr_4 [i_3] [i_3] [i_3] [i_3]))));
        var_25 *= ((/* implicit */unsigned short) arr_5 [i_3] [i_3]);
        var_26 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_3]))))));
        var_27 ^= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_3])))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_28 |= ((/* implicit */_Bool) var_8);
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) -478374756))));
        var_30 *= ((/* implicit */unsigned long long int) arr_0 [(short)5]);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_2 [i_5] [i_5] [(unsigned short)6]))));
        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((18438299824408231935ULL) - (18438299824408231911ULL)))));
        var_33 = arr_4 [i_5] [i_5] [i_5] [i_5];
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) -176404790959528572LL))));
    }
    var_35 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) 8444249301319664ULL)) ? (8444249301319665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((18438299824408231926ULL) > (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
    {
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_3 [i_6] [i_6 - 1]))));
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (8444249301319687ULL))) : (((/* implicit */unsigned long long int) -1104199362)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
            {
                {
                    var_38 += ((/* implicit */short) var_2);
                    var_39 ^= ((/* implicit */unsigned long long int) ((signed char) arr_2 [(signed char)5] [i_8 - 3] [i_6 + 1]));
                    var_40 += ((/* implicit */signed char) ((arr_19 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_7]) << (((arr_5 [i_7] [i_7]) - (1816757147U)))));
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_41 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) var_1))), (max((min((var_5), (((/* implicit */unsigned long long int) arr_21 [i_9])))), (((/* implicit */unsigned long long int) ((short) arr_20 [i_9] [i_9] [i_9] [i_9])))))));
        var_42 ^= ((/* implicit */unsigned short) arr_16 [i_9]);
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((arr_21 [i_9]) ? (((/* implicit */int) arr_21 [i_9])) : (((/* implicit */int) (signed char)-58)))) ^ (((/* implicit */int) arr_14 [i_9])))))));
    }
    for (signed char i_10 = 2; i_10 < 20; i_10 += 1) 
    {
        var_44 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -9223372036854775790LL)), (8444249301319681ULL)))) ? (9173256872506056556ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)-58)) == (((/* implicit */int) (signed char)-85))))))));
        var_45 -= ((/* implicit */unsigned long long int) ((_Bool) ((int) ((short) arr_2 [i_10 + 1] [i_10 - 1] [i_10 + 2]))));
    }
    var_46 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 3622976698U)))));
}
