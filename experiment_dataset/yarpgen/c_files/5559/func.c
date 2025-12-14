/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5559
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
    var_19 *= ((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_20 = ((/* implicit */unsigned char) (-((~((-(0U)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+((~((~(((/* implicit */int) (unsigned short)31984))))))));
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_9)))))))));
        var_22 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(14318525688225165552ULL)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) (+((-(4294967271U)))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)48012)))))))));
            arr_6 [i_0] &= ((/* implicit */unsigned char) (-((-(24U)))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (~((-(4294967271U)))));
                    arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-((~(34U)))));
                    var_26 = ((/* implicit */long long int) (-((+(0U)))));
                }
                var_27 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_9 [i_2]))))));
                arr_15 [i_0 + 1] [i_2] = ((/* implicit */_Bool) (-((~(arr_0 [i_0 - 2])))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_20 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */short) (~((-(0U)))));
                var_28 = (!(((/* implicit */_Bool) (+(4294967271U)))));
                var_29 = (-((~(((/* implicit */int) (unsigned short)11565)))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) (-((-(2047878323U)))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                var_32 |= ((/* implicit */unsigned int) (-(4182676613589371611ULL)));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(4294967271U))))))));
                        var_34 = ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) var_5))))))));
                        arr_32 [i_0] [i_6] [i_0] [i_8] |= (-((-((+(arr_18 [i_7 - 1] [i_7 - 1]))))));
                        var_35 = ((/* implicit */_Bool) (-(25U)));
                        arr_33 [i_0] [i_0] [i_7 - 1] = ((/* implicit */unsigned char) (~(0U)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(-2064226631325295697LL))))))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 1887310725))))))))))));
                    }
                } 
            } 
            arr_39 [i_0] [i_6] &= ((/* implicit */unsigned int) (~((~((~(arr_12 [i_0 - 3] [i_6] [i_6] [i_6] [i_0 - 3] [i_6])))))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967263U)))))))));
                            var_39 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) (unsigned short)11549))))))));
                        }
                    } 
                } 
                arr_48 [i_0] [i_6] [i_0] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_9)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_40 -= ((/* implicit */short) (+((~((~(40U)))))));
                            var_41 = (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)17530))))))));
                        }
                    } 
                } 
                var_42 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_0] [(signed char)6] [i_0] [i_0] [i_11] [0LL]))))))))));
            }
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_43 = (-((~(arr_5 [i_0 - 1] [i_6] [i_16]))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (~((~(arr_9 [4U]))))))));
                            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (-((+(24U))))))));
                            arr_62 [i_18] [i_17] [i_16] [i_6] [i_18] = ((/* implicit */long long int) (-((-(arr_30 [i_16] [(unsigned short)7] [i_16])))));
                            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (~((-(var_15))))))));
                            var_47 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-542))))));
                        }
                    } 
                } 
                arr_63 [13ULL] [13ULL] = ((/* implicit */short) (~((+(33U)))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    for (int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (-((~(var_8))))))));
                            var_49 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 24U)))))));
                        }
                    } 
                } 
            }
            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_65 [(_Bool)1] [i_6] [i_6] [i_6] [i_0 - 1] [i_6])))))))));
        }
    }
}
