/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67728
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
    var_12 = ((/* implicit */signed char) (+(var_8)));
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_7 [i_1] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((var_2), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
            arr_8 [i_1] [i_0] [(unsigned short)15] = (+(min(((+(((/* implicit */int) var_1)))), ((+(var_6))))));
        }
        for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) (+(var_2)));
            arr_13 [i_0] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) max((((/* implicit */int) var_3)), ((+(8)))))) : (((((/* implicit */_Bool) (+(var_6)))) ? (-3694388705287824649LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))));
            arr_14 [i_0] [i_2 - 1] [i_2 + 3] = ((/* implicit */_Bool) var_2);
            arr_15 [i_2] [i_0] = ((/* implicit */_Bool) var_6);
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_0))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            var_15 ^= ((/* implicit */int) var_9);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        arr_26 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7076252003799841868LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_8)))))))));
                        arr_27 [i_5] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? ((~(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_4))));
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_1))))))) : ((~((+(var_2)))))));
                        arr_28 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_2))) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_10)))))))) ? (((max((var_4), (var_3))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 919672910)) ? (3807220554023694167LL) : (((/* implicit */long long int) -2147483635)))))) : (((/* implicit */long long int) min(((-(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 1) 
            {
                arr_34 [i_0] [i_7] = ((/* implicit */unsigned char) var_3);
                arr_35 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_2)))) ? (var_8) : (max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) var_6))))))));
            }
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))));
            arr_36 [i_6] |= ((/* implicit */short) min((-1658602820), (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_3))));
                arr_41 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-56))));
                /* LoopSeq 2 */
                for (int i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) var_6);
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(var_7))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_48 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (12298698699151508672ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((var_3) ? (var_6) : (((/* implicit */int) var_11)))) : (((var_4) ? (var_6) : (((/* implicit */int) var_3)))))))));
                        arr_49 [i_10] [i_10] [i_0] [(_Bool)1] [i_6] [i_10] [i_0] = var_10;
                        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) var_3)))))) : (var_2))), (((/* implicit */unsigned long long int) min((-524872103), (((/* implicit */int) (unsigned short)45235)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_52 [i_11] [i_11] = ((/* implicit */int) var_1);
                        arr_53 [(unsigned short)8] [i_9] [i_11] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (11LL) : (((/* implicit */long long int) var_6))));
                    }
                    arr_54 [i_8] [11ULL] [(signed char)22] [i_8] [i_8] = ((/* implicit */long long int) var_11);
                }
                for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    arr_57 [i_6] [i_0] [i_6] [i_0] [i_0] = var_6;
                    arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), ((+(850959107U)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
                    arr_59 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) var_6)), (var_7)))))) ? (min((6148045374558042943ULL), (((/* implicit */unsigned long long int) -12LL)))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (max((var_7), (var_8))) : (var_8))))));
                }
            }
            for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                arr_64 [(unsigned short)12] [i_6] [i_6] [i_6] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_5)), (max((var_2), (((/* implicit */unsigned long long int) var_10))))))));
                arr_65 [i_0] [i_6] = ((/* implicit */unsigned short) var_11);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_69 [i_0] [i_6] [i_14] &= ((/* implicit */unsigned long long int) max(((~(max((var_5), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (max((var_7), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), (-707354600)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) var_9);
                    arr_73 [i_15] |= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), ((+(var_5)))));
                }
                arr_74 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) (signed char)13))))) ? (min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_8)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_11)))) : (((/* implicit */int) var_0)))))));
                arr_75 [i_14] = ((/* implicit */short) min((((/* implicit */unsigned long long int) -808950712)), (8185021083105684046ULL)));
                arr_76 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((((_Bool)0) ? (var_6) : (((/* implicit */int) var_4))))))) ? (max(((+(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_0))));
            }
            arr_77 [i_6] = ((/* implicit */_Bool) (+(var_2)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_16 = 3; i_16 < 23; i_16 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned char) var_9);
            arr_80 [i_16] = var_4;
            arr_81 [i_16] [i_16] = var_9;
        }
        arr_82 [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65248)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_9))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_1)))))))) : (((/* implicit */int) var_0))));
    }
    var_25 |= ((/* implicit */_Bool) var_2);
}
