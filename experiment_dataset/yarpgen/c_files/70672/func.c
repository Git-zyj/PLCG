/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70672
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_8)))) | (0ULL)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34185))) : (var_4)))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) 1861474923)) : (var_4)))) ? (max((13510798882111488ULL), (((/* implicit */unsigned long long int) (unsigned short)17452)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_11)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)65515)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48083))))) : ((((_Bool)0) ? (9223372036854775801LL) : (((/* implicit */long long int) arr_0 [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775801LL)))) ? (arr_0 [i_0]) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_19 *= ((/* implicit */unsigned long long int) min(((~(max((var_8), (1861474933))))), ((-(((/* implicit */int) (_Bool)0))))));
        var_20 &= ((/* implicit */unsigned int) var_7);
        var_21 *= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_3 [i_2]))))), ((~(min((((/* implicit */long long int) var_11)), (arr_6 [i_2])))))));
        var_22 = ((/* implicit */long long int) var_14);
        arr_8 [i_2] [i_2] = ((/* implicit */short) (~(-8954125649704776026LL)));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_23 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-3805)), ((unsigned short)17481)))) ? (min((3999437910U), (799180508U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_3]), (((/* implicit */unsigned short) var_1)))))))), (((/* implicit */unsigned int) (unsigned short)62989))));
        var_24 *= ((/* implicit */unsigned long long int) (unsigned short)17455);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 6; i_6 += 4) 
            {
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    {
                        arr_22 [i_6] [i_5] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_6 + 3] [i_4 + 1])) / (((/* implicit */int) (unsigned short)48084))));
                        var_25 += ((/* implicit */long long int) arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1]);
                        var_26 += ((/* implicit */_Bool) -1LL);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (-(-1713752912)));
                            var_28 = -8562612730397599434LL;
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_9 = 1; i_9 < 8; i_9 += 1) 
        {
            var_29 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4]))) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) var_3)) : (arr_26 [i_4] [i_4] [(unsigned char)9])))));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_30 = ((((/* implicit */_Bool) arr_25 [i_4 - 1])) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_15 [i_4] [6U])))) : (((/* implicit */int) (signed char)-1)));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57486))) : (arr_28 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1])));
                var_32 ^= ((/* implicit */unsigned short) (-(arr_19 [i_10] [i_9 - 1] [i_4 + 1] [i_10])));
                var_33 = ((/* implicit */long long int) var_9);
            }
        }
        for (unsigned int i_11 = 2; i_11 < 8; i_11 += 2) 
        {
            var_34 += ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_4 + 1] [i_11])) | (((/* implicit */int) (_Bool)1))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11] [i_11])) ? (((/* implicit */int) arr_30 [i_4 + 1] [i_4])) : (((/* implicit */int) ((_Bool) (signed char)18)))));
        }
        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_36 = ((/* implicit */signed char) var_3);
            var_37 = ((/* implicit */short) 176331787);
        }
        var_38 = ((/* implicit */unsigned short) -1431241760);
    }
}
