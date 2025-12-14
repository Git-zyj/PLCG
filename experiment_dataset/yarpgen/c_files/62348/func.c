/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62348
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) 9287195070976816612ULL);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) var_2);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */int) ((long long int) arr_3 [i_1]));
                            var_17 |= (+(((/* implicit */int) (unsigned short)5590)));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2])) ? (8672842812309389139LL) : (-934747986938560534LL)))));
                        var_19 = ((/* implicit */signed char) (+(var_3)));
                        arr_15 [i_5] [i_2] [10U] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_7 [3] [i_2 - 1] [i_2 + 1] [(short)0] [i_2 + 1] [i_2 + 1]));
                        arr_16 [i_0] [i_5] [i_0] = ((/* implicit */short) var_2);
                    }
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 4; i_7 < 8; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) var_12);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(7U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : ((~(1616093751U)))));
                        }
                        for (signed char i_8 = 4; i_8 < 8; i_8 += 4) /* same iter space */
                        {
                            arr_25 [i_8 - 2] [(signed char)5] [i_2] [i_2] [(signed char)5] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_0] [i_2 - 2] [(unsigned short)8] [i_6] [i_8] [i_8 - 3]))));
                            var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1])) ? (var_1) : (((/* implicit */unsigned int) var_6))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (536870784ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11))))));
                        }
                        var_24 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_12)))) == ((+(arr_1 [i_0])))));
                        var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)11)) & (((/* implicit */int) (short)0))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_26 = 3066574207U;
                        arr_30 [i_2] [i_2] [1ULL] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [3] [i_1] [i_1] [3] [i_0])))))) : (arr_4 [i_0])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_34 [11U] [i_1] = ((/* implicit */unsigned int) (!((_Bool)0)));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_0] [i_2 - 1] [11ULL] [i_2 - 1]))));
                        var_28 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)31612))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_28 [i_1] [i_2 - 1] [(short)7] [(unsigned char)0]))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)199))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) 3U);
    }
    for (int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
    {
        arr_38 [(signed char)8] |= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)0))))));
        var_32 = max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (286297409U))), (((/* implicit */unsigned int) var_12)));
    }
    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_44 [i_12] [i_12] [i_12] [i_12])), ((-(145964587U)))));
                    var_34 = ((/* implicit */unsigned int) (+((~(-548986982)))));
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)64)), (arr_42 [i_12] [i_12] [i_12])))))) * (((/* implicit */int) arr_39 [(_Bool)1])))))));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 17; i_15 += 3) 
    {
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8728)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10835))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (256557312811249391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [(_Bool)1])))))));
        var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_40 [i_15])))) | (var_3)));
        var_38 = ((/* implicit */_Bool) (~(((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15]))) : (0U)))));
    }
    var_39 = ((/* implicit */int) var_0);
    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)111)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_3)))) ? (var_3) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (var_3))))))));
}
