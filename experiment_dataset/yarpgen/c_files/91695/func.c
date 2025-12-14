/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91695
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 576460752303422976LL)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [(unsigned char)17] [i_1]))))), (arr_4 [i_0] [i_0 + 1])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)9)))) ? (((/* implicit */int) (signed char)-11)) : (((((((/* implicit */int) arr_2 [i_2])) + (2147483647))) >> (((((/* implicit */int) (short)-32760)) + (32772)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) <= (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_2 + 4]))))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_7 [i_2 + 4] [i_2] [i_2 + 4] [i_2]))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_2 - 2] [i_0 - 1]), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_2] [(short)6])))))) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((unsigned int) (short)-4)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)9)))))))));
                    var_17 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-5)))))))) >> (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)4))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) ^ (999215523885137077LL))))));
                }
                for (short i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(arr_11 [i_4 - 2] [i_3] [i_1] [i_0]))))))));
                                var_19 ^= (+(((/* implicit */int) (unsigned char)41)));
                            }
                        } 
                    } 
                    arr_18 [i_3] = ((/* implicit */short) var_11);
                    arr_19 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [(short)11]);
                    var_20 ^= ((/* implicit */signed char) min((548513058), (((/* implicit */int) (signed char)107))));
                }
                for (short i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                arr_28 [i_8] [i_6] [i_6] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_6] [i_7])) ? (-1) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((int) (_Bool)1))))) ? (((unsigned long long int) arr_3 [(_Bool)1] [(_Bool)1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1625566813)) ? (((/* implicit */int) (short)-7318)) : (((/* implicit */int) arr_5 [i_7] [i_1] [i_6 + 2]))))))) ? (((/* implicit */int) (short)224)) : (((/* implicit */int) ((short) (unsigned short)54986)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-225)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_27 [16LL] [10U] [4ULL] [i_9 + 1] [i_6 - 2] [i_1])))), (477811330)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (unsigned char)207))))) : (((arr_13 [i_1] [i_6 + 2] [i_9 + 1] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_6 - 2] [i_9 - 1] [i_9 - 1]))) : (6428200797004245733LL))))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((8947111085016646986LL) - (8947111085016646959LL))))))));
                        arr_32 [(_Bool)1] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) 1152921504606846975ULL);
                    }
                }
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)0));
    /* LoopSeq 4 */
    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
    {
        var_25 ^= arr_27 [i_10 - 1] [i_10] [18LL] [18LL] [i_10 - 1] [i_10];
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (long long int i_12 = 3; i_12 < 13; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) (unsigned char)246);
                    arr_41 [i_10] [i_11] [i_11] [i_12] &= ((/* implicit */_Bool) min((((int) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) (signed char)62)) - (61)))))), (((/* implicit */int) ((_Bool) arr_40 [i_12 + 2] [i_10 + 2])))));
                    arr_42 [i_12] [i_11] [i_12] = ((/* implicit */short) ((unsigned short) (short)8191));
                }
            } 
        } 
    }
    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 2) /* same iter space */
    {
        arr_46 [i_13] = (short)-7314;
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)2337))) || (((/* implicit */_Bool) arr_8 [i_13 + 1] [18]))));
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned long long int) 1808911799);
        var_28 ^= ((/* implicit */unsigned short) min((((int) ((int) var_4))), (((min((((/* implicit */int) (_Bool)1)), (1457050992))) << (((((((/* implicit */int) (unsigned char)127)) << (((/* implicit */int) var_0)))) - (2130706412)))))));
    }
    for (unsigned char i_14 = 3; i_14 < 23; i_14 += 4) 
    {
        arr_51 [i_14] [i_14] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) && (((/* implicit */_Bool) -8963929189264506521LL))))) | (((arr_48 [i_14] [i_14 + 1]) >> (((/* implicit */int) arr_49 [i_14] [i_14])))))) : (((/* implicit */int) ((_Bool) min((arr_48 [i_14] [(short)8]), (arr_48 [(signed char)14] [(_Bool)1]))))));
        arr_52 [22] [i_14] = ((/* implicit */int) 4294967295U);
        arr_53 [i_14] = ((/* implicit */_Bool) var_9);
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_15]))))) ? (((/* implicit */int) ((7860056985182997492LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))) : (((int) (short)15433)))))));
        var_30 ^= ((((/* implicit */_Bool) ((int) 17351699722568845405ULL))) ? (arr_12 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */int) arr_10 [i_15])));
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            for (int i_17 = 4; i_17 < 14; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    {
                        arr_63 [i_15] [i_15] [i_15] [(_Bool)1] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (short)7317)) ? (arr_17 [i_17 + 2] [i_17] [i_17 - 4] [i_17 + 2] [i_18]) : (arr_17 [i_17 + 2] [1ULL] [i_17 - 1] [i_18] [i_18])));
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_17 + 1] [i_17 - 3] [(_Bool)1] [i_17 + 1] [i_18])) ? (arr_17 [i_17 - 1] [i_17] [i_17] [i_17] [i_18]) : (8386560)));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)141)), (1004668486)))) ? (((/* implicit */int) max(((short)1837), (((/* implicit */short) var_1))))) : (((/* implicit */int) (short)1867)))) | (((/* implicit */int) (unsigned short)33978))));
    var_33 = ((/* implicit */unsigned int) ((unsigned char) (short)16009));
}
