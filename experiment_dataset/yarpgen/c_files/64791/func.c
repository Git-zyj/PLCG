/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64791
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) 536870911ULL);
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)49664));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1])), (5343831471512573488ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (6510056657816084621ULL)))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [(_Bool)1])) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 14415235952862539745ULL)) ? (var_4) : (var_8)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_2]))))), ((-(var_13)))))));
            arr_7 [i_2] [(_Bool)1] [i_1 - 1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))) + (2147483647))) << (min((((((/* implicit */_Bool) 13876785946855532348ULL)) ? (((/* implicit */int) arr_3 [i_2])) : (arr_1 [i_1]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) > (2692292941004187798ULL))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_15 [i_5] [i_5] [i_3] [i_5] [0] [i_5] &= ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) (signed char)127)), (max((((/* implicit */unsigned long long int) var_13)), (16330827909501027274ULL))))));
                            arr_16 [i_1] [i_2] [i_3] [i_3] [i_2] [i_4] [8U] = ((/* implicit */unsigned short) max((((unsigned int) arr_9 [i_1] [i_2])), (((/* implicit */unsigned int) 393947605))));
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (2115916164208524361ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [2] [2] [i_1] [(unsigned short)5] [(_Bool)1] [i_6])) ? (min(((-(2115916164208524347ULL))), (((/* implicit */unsigned long long int) var_1)))) : (2115916164208524335ULL)));
            var_22 = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_12 [i_1 - 1] [(_Bool)0])));
            var_23 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_12)), (573696163U)))));
            arr_20 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 15358363646325299298ULL)));
            arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25)) || (((/* implicit */_Bool) (signed char)-40))));
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_1] [(_Bool)1] [i_7] [(_Bool)1] [i_8] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 432022850)) ? (446917502U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_8])))))) ? (((/* implicit */unsigned long long int) min((220310952U), (((/* implicit */unsigned int) (_Bool)1))))) : (((arr_22 [i_7]) ? (16330827909501027270ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9 - 1] [i_7] [i_1]))))))) == (2115916164208524361ULL)));
                        arr_30 [i_1 - 1] [i_7] [i_1 - 1] [i_8] [i_9] = ((/* implicit */int) arr_24 [i_1] [i_1] [i_1 - 1]);
                    }
                } 
            } 
            arr_31 [i_1 - 1] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4354296339981183754ULL), (max((var_0), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [8U])) <= (((/* implicit */int) arr_12 [i_1] [(_Bool)1]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_1] [i_7] [i_1])) ? (3889112134U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) <= (((/* implicit */unsigned int) max((var_3), (((/* implicit */int) (signed char)(-127 - 1)))))))))));
            var_24 += ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((5790517312191477730ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) == (max((268435456), (((/* implicit */int) arr_14 [i_1 - 1] [1U] [1U] [i_7] [i_7] [1U] [i_7]))))))), (var_8)));
        }
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_26 [(signed char)5] [i_1 - 1] [i_1]))));
    }
    var_26 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) 5790517312191477725ULL))) ? (((/* implicit */unsigned long long int) var_13)) : (((18446744073709551594ULL) + (var_15))))) - (((/* implicit */unsigned long long int) (+(((var_3) / (((/* implicit */int) (_Bool)1)))))))));
    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (var_7))) : (((/* implicit */unsigned long long int) min((8U), (((/* implicit */unsigned int) var_2)))))));
    var_28 |= ((4184183690U) * (((/* implicit */unsigned int) var_4)));
}
