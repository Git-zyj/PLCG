/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84750
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
    var_10 = ((/* implicit */unsigned short) var_6);
    var_11 = ((((/* implicit */_Bool) var_7)) ? (var_1) : (min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) var_5))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min((((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) << (((1201647621) - (1201647621))))), (((/* implicit */long long int) (short)-1)))), (((((/* implicit */_Bool) (-(arr_0 [i_0 - 1] [i_0 - 1])))) ? (((-18LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28579))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)0)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_12 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 2]))));
                        arr_13 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_5 [i_2]))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3] [i_2] [i_1])))))));
                        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 2]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */long long int) 67108736U)) : (var_6)))));
                        arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_5 [i_0 + 2])));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 3] [i_1 - 1] [i_0 - 2]))) : (-4166119408193137170LL));
                arr_18 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4] [i_4 + 3] [i_4 + 2] [i_4 - 2]))));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_15 = ((/* implicit */short) ((arr_19 [i_5] [i_0 - 2] [i_0 + 3]) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_16 = (((+(((/* implicit */int) var_4)))) * ((+(((/* implicit */int) (short)-28437)))));
            }
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((arr_15 [i_1 - 1] [i_1] [i_0 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0]))));
                            arr_33 [i_7] [i_7] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((unsigned long long int) arr_25 [i_0 - 2] [i_0 + 1] [i_7] [i_0 + 1]));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)36945))))) : (var_8)));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) (~(((long long int) arr_23 [i_6] [i_1] [i_0]))));
            }
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_9] [i_9] [i_9] [i_1])) ? (((/* implicit */long long int) var_3)) : (var_8))))));
                var_21 = -18LL;
            }
            arr_37 [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) -1233042699206644198LL);
        }
        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_41 [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
            arr_42 [i_0 - 2] = ((/* implicit */int) ((((long long int) arr_38 [i_0 + 1])) & ((-(arr_27 [i_0] [i_0] [i_10] [i_0] [i_0 + 2])))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (((+(arr_23 [i_0] [i_11] [i_12]))) != (((/* implicit */int) arr_36 [i_0 - 1] [i_11 + 1] [i_12] [i_12]))))) ^ (((int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_47 [i_12] [i_10] [i_12] [i_12] [i_0] [i_0] = ((/* implicit */int) var_9);
                        arr_48 [i_0] [i_10] [i_10] [i_10] [i_11] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_32 [i_0] [i_10] [i_11] [i_11] [i_12])))) ? (((/* implicit */long long int) max((((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) arr_36 [i_0] [i_0] [i_0 + 3] [i_0])))), (min((((/* implicit */int) (unsigned short)12)), (arr_23 [i_0] [i_10] [i_11 - 1])))))) : ((~((-(var_1)))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_11] [i_10] [i_11] [i_12] [i_11])) * ((+(((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_11] [i_0])))))))));
                    }
                } 
            } 
            arr_49 [i_0] = ((/* implicit */unsigned long long int) var_1);
        }
        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_22 [i_0 - 2] [i_0 + 2]))));
                        var_25 = ((/* implicit */unsigned char) (unsigned short)51150);
                        arr_60 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_27 [i_0] [i_13] [i_15] [i_15] [i_0 + 3]))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0 - 1] [i_13]) == (((/* implicit */int) arr_39 [i_0])))))))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : ((+(arr_30 [i_0] [i_0] [i_0] [i_15] [i_15] [i_0])))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                arr_63 [i_0] [i_13] [i_16] = ((/* implicit */unsigned char) var_4);
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0 + 2] [i_13]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_39 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16] [i_0] [i_0]))) : (18LL))) / (((/* implicit */long long int) ((var_3) - (((/* implicit */int) var_0))))))))));
            }
            for (int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (max((536870400), ((-(arr_28 [i_0] [i_13] [i_0] [i_17]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) <= (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)0)))))))));
                arr_66 [i_17] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_56 [i_0 + 1]), (arr_56 [i_0 - 1]))));
                arr_67 [i_0] [i_13] [i_17] = ((/* implicit */int) (-(min((((/* implicit */long long int) (unsigned char)128)), (((((/* implicit */_Bool) var_3)) ? (arr_55 [i_17] [i_13] [i_13] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) max((-1780428974763380727LL), (((/* implicit */long long int) arr_3 [i_17] [i_13] [i_17]))))) || (arr_43 [i_0 + 3]))) ? (((/* implicit */unsigned long long int) arr_44 [i_13] [i_13] [i_0 - 1] [i_17])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_0]), ((signed char)116))))) ^ (((((/* implicit */_Bool) arr_65 [i_0] [i_0 + 3] [i_17])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) -7442964218527409383LL))))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                arr_70 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_18] [i_13] [i_18] [i_18] [i_13]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0] [i_0])) != (var_6))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) (unsigned char)176))))))))));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_53 [i_18] [i_0] [i_0]))));
                var_30 = ((/* implicit */unsigned char) (~(max((((long long int) arr_46 [i_0] [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) arr_59 [i_0] [i_0])))))))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_53 [i_0] [i_13] [i_18])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_13] [i_13] [i_18]))))) : ((+(((/* implicit */int) arr_35 [i_0] [i_0] [i_0])))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
            }
        }
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            var_32 = arr_19 [i_19] [i_19] [i_19];
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                var_33 = max(((+(((/* implicit */int) arr_9 [i_0 - 1] [i_19] [i_20])))), (((/* implicit */int) (!(((0LL) != (((/* implicit */long long int) 268435448))))))));
                var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
            }
            arr_78 [i_0] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_61 [i_0] [i_0 + 2] [i_19] [i_19]) >= (arr_61 [i_0] [i_0 - 2] [i_0 + 3] [i_19]))))));
        }
    }
}
