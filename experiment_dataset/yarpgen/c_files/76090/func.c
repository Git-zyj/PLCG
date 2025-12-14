/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76090
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [8LL] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 2] [i_1]);
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))) & (399734840957877802LL)));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (var_1)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] [i_3] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (-399734840957877792LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))))));
            var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_3])) <= (((/* implicit */int) var_10)))))));
            arr_14 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (+(var_7))));
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_2] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)25)), (var_10)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (399734840957877826LL)))) : ((-(0ULL)))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (11350748020140073558ULL) : (((/* implicit */unsigned long long int) -399734840957877802LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1384113075U)) ? ((+(var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
                    var_14 = (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)16)))))) <= ((-(((/* implicit */int) ((short) (signed char)(-127 - 1)))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((short) ((arr_6 [i_3] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 23; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_24 [i_2] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [i_4] [i_6 - 1] [i_7 + 2] [i_3])) <= (((((var_1) <= (((/* implicit */int) var_8)))) ? (arr_10 [i_2] [i_3]) : (((unsigned long long int) (unsigned short)24344))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 3; i_8 < 24; i_8 += 2) 
            {
                arr_29 [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_8 + 1]))) <= (((((/* implicit */_Bool) (unsigned short)7033)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4011577272U))))))));
                var_17 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_8] [i_3])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)21))))) : (min((((/* implicit */long long int) var_5)), (arr_23 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */int) ((18446744073709551603ULL) <= (((/* implicit */unsigned long long int) var_6))))) <= (((/* implicit */int) ((short) arr_25 [i_2] [i_3]))))))));
            }
            for (unsigned short i_9 = 1; i_9 < 24; i_9 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) ((min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((unsigned int) 2791914979U))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((-399734840957877802LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519)))))) <= (var_1)))))));
                var_19 = ((/* implicit */long long int) max((((unsigned int) (unsigned short)65502)), (((/* implicit */unsigned int) ((short) arr_10 [i_9 + 1] [i_9 - 1])))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 3979092077785834226LL))));
                            arr_37 [i_9 - 1] [i_3] [i_9] [i_2] [i_11] [i_2] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_21 [i_3] [i_9 - 1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned short) (short)(-32767 - 1)))))) <= (((((/* implicit */_Bool) max((-399734840957877805LL), (((/* implicit */long long int) var_11))))) ? (max((((/* implicit */long long int) var_2)), (3138446169527681039LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_41 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3629654148U))))))));
                arr_42 [i_2] [i_3] [i_3] [i_12 - 1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5)))))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                arr_45 [i_13] [i_13] = ((/* implicit */unsigned short) (-((-(2910854227U)))));
                var_22 ^= min((((/* implicit */long long int) (unsigned short)34516)), (-399734840957877803LL));
                var_23 = ((/* implicit */short) (unsigned short)2846);
            }
        }
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((2831000879729694417LL) + (var_9))), (((/* implicit */long long int) ((unsigned int) var_7)))))) <= (((unsigned long long int) var_6))));
    }
    for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        var_25 = ((short) ((((/* implicit */_Bool) ((3629654142U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_43 [i_14])));
        var_26 = ((/* implicit */unsigned char) ((max((arr_39 [i_14] [i_14]), (((/* implicit */long long int) (unsigned short)14651)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2846)) <= (((/* implicit */int) (!(arr_27 [i_14] [i_14] [i_14]))))))))));
    }
    var_27 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) <= (((/* implicit */int) var_0)))))))) <= (((/* implicit */int) (unsigned short)65514))));
    var_28 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) ((_Bool) var_3))))));
}
