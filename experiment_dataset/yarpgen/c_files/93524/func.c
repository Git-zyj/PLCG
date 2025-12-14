/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93524
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((long long int) var_1));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_9))) ^ (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned int) (_Bool)0)), (1641718373U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) (_Bool)1)) << (((9046740013468105992LL) - (9046740013468105979LL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) || (((/* implicit */_Bool) ((var_2) | (((/* implicit */int) var_6))))))))) : (((((var_8) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)149)))))) : ((-(var_5))))))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(max((((/* implicit */long long int) (_Bool)1)), (101317838282904947LL))))))));
                            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max(((~(-5707078882709479428LL))), (var_8)));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1] [i_1 - 1] [i_1] [17ULL] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_21 = ((/* implicit */int) arr_1 [10] [10]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_8] [i_8]))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_7]))) : (0U)))) : (arr_14 [i_7] [i_7] [i_8] [7U] [i_8] [(_Bool)1])));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) != (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_3)))))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_7))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (750060500213353357LL) : (((/* implicit */long long int) 4294967295U))));
        }
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 15; i_11 += 1) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-750060500213353357LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) 322998914U);
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-(arr_32 [i_11 - 4] [i_13 - 1])));
                            var_30 = (+((-(((/* implicit */int) (_Bool)1)))));
                            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -1069708051166562936LL))) && (((/* implicit */_Bool) arr_23 [i_11 - 3]))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */int) 322998904U);
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 13; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_35 = ((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) (unsigned char)37)));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_7] [i_11 - 3] [i_17] [(unsigned char)10] [i_16 - 2] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (arr_38 [i_7] [i_11 - 4] [i_7] [(unsigned char)2] [i_16 + 3] [(unsigned char)2])));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16105992916392915356ULL)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned char)243))));
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_16 + 4] [i_16] [i_16 + 4] [i_16 + 3]))));
                            var_39 = ((/* implicit */unsigned char) (-(255U)));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))));
            }
            for (unsigned int i_18 = 1; i_18 < 16; i_18 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) ((long long int) arr_29 [i_11 - 4] [i_11 - 1] [i_11] [i_11 + 2] [i_11 - 1] [i_11 + 2]));
                var_42 = ((/* implicit */unsigned char) ((short) var_4));
                var_43 = ((arr_19 [3U] [i_7] [3U] [5U] [i_11] [i_18]) <= (((/* implicit */long long int) ((/* implicit */int) var_9))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)18)))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 2; i_20 < 16; i_20 += 3) 
                {
                    for (short i_21 = 1; i_21 < 15; i_21 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */int) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19 - 1] [i_19 - 1] [i_20 - 1] [i_19 - 1]))) : (var_10)));
                            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) 610922472))));
                            var_47 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) (short)-27614)))));
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */long long int) var_10);
        }
    }
    for (signed char i_22 = 1; i_22 < 13; i_22 += 4) 
    {
        var_49 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (arr_23 [i_22 + 3])))) ? (((/* implicit */int) min(((unsigned char)248), ((unsigned char)12)))) : (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26021))) : (var_8)))) ? (((((/* implicit */_Bool) arr_48 [(signed char)6])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_47 [i_22] [i_22])))) : (((/* implicit */int) arr_63 [i_22 + 3] [i_22]))))));
        var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((((unsigned long long int) 4294967270U)) & (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52380))) / (var_5))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))))))));
        var_51 = ((/* implicit */unsigned int) var_12);
        var_52 = ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_22]))) ^ (var_8));
    }
    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 4) 
    {
        var_53 -= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)27620))))));
        var_54 = ((/* implicit */unsigned int) 16105992916392915353ULL);
        var_55 += ((/* implicit */short) min((((/* implicit */int) var_4)), ((-(((/* implicit */int) arr_3 [i_23] [i_23]))))));
        var_56 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_2 [i_23] [i_23])) + (((/* implicit */int) (unsigned char)153))))));
    }
}
