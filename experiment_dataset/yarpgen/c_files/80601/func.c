/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80601
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_16))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), ((+(534072831U))))))));
        var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_5)) : (var_10)))) && (((/* implicit */_Bool) arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) max((min((arr_0 [i_0 - 3]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))), (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) var_4)) : (2125796715)))) || ((((!((_Bool)0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)11)))))))));
                        var_22 = ((unsigned int) 831061647);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) var_13);
                            var_23 += ((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_24 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)65110)))) ? ((~(min((831061647), (((/* implicit */int) (unsigned short)65110)))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [i_0 - 2] [i_1 - 1] [i_5 + 2])), (var_15))))));
                            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65092)) && (((/* implicit */_Bool) max((((((/* implicit */int) var_4)) - (var_16))), (((/* implicit */int) arr_8 [i_0 - 3] [i_1 - 1] [i_1])))))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_1 [i_1] [i_1]))))));
                            var_27 ^= ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2] [i_2]);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 4] [i_0 - 1])), (var_3))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65112)))))));
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_22 [i_3])))));
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_7] = ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))));
                            var_30 &= ((/* implicit */unsigned int) ((((6539882296998546634ULL) >= (((/* implicit */unsigned long long int) var_5)))) ? (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_1 - 1] [i_0])) ? (((6539882296998546638ULL) << (((((/* implicit */int) var_9)) + (2796))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10205648934243986350ULL) <= (arr_19 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_12 [i_0] [i_7]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 4; i_8 < 20; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] &= arr_8 [i_8] [i_8] [i_8];
        var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8] [i_8] [i_8 - 3] [i_8 - 3] [i_8])) ? (((((/* implicit */_Bool) arr_22 [20ULL])) ? (arr_22 [20]) : (arr_0 [i_8 + 1]))) : ((-(((/* implicit */int) arr_5 [i_8 - 3] [i_8]))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    var_32 -= ((/* implicit */unsigned long long int) arr_21 [i_8] [i_9] [i_9] [i_8] [i_9]);
                    arr_34 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]))))))))) - (((/* implicit */int) ((arr_14 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 2]) <= (((/* implicit */unsigned long long int) max((1758796867), (((/* implicit */int) arr_1 [i_8] [i_9]))))))))));
                    var_33 = var_1;
                }
            } 
        } 
    }
    var_34 = ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -1217622340)))))) ^ (((/* implicit */int) var_6)));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | ((+(4294967295U)))));
}
