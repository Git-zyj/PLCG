/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90484
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) arr_1 [i_0])), (var_2))))), (((unsigned int) var_16))));
        var_20 = ((/* implicit */unsigned long long int) var_3);
        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) < (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (((((-(436067592))) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) - (9276)))));
                        var_23 = ((/* implicit */short) ((_Bool) (-2147483647 - 1)));
                        var_24 = ((/* implicit */signed char) arr_9 [i_0] [i_3 + 1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) var_10);
                        var_26 = ((/* implicit */int) arr_9 [i_0] [i_4] [i_4] [(signed char)16]);
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) var_11))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_5 [i_7] [i_7])))));
        var_28 = ((/* implicit */unsigned short) (short)(-32767 - 1));
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)220)) - (((/* implicit */int) (unsigned short)29609)))), (((/* implicit */int) arr_27 [i_7]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [(unsigned char)2]))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))) | (var_13))))))))));
                        var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) var_12)), (((((/* implicit */int) arr_3 [i_10 + 1] [i_8 + 4])) & (((/* implicit */int) arr_19 [i_7] [i_7]))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) (unsigned short)23287)))) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (signed char)-32)) : ((+(((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) (signed char)58))))) > (var_10))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            for (short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (signed char i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) (+(((unsigned long long int) ((signed char) var_9)))));
                                var_34 |= ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_12 + 1] [i_12 + 1]))));
                                var_35 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_37 [i_12 + 1] [i_12] [i_15 + 2])))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_11] [i_12 - 1] [i_13])) >> (((((/* implicit */int) arr_10 [i_11] [i_12 + 3] [i_13])) - (115)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23287))) : (((unsigned long long int) arr_15 [i_13] [i_13] [i_11] [i_12] [i_11] [i_11]))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_3)))));
                                var_38 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -5790746715602910110LL)))) % ((~(var_3))))) < (arr_20 [i_12 - 1])));
                                var_39 = ((/* implicit */unsigned int) arr_17 [i_11]);
                                var_40 = ((/* implicit */int) var_1);
                                var_41 = ((/* implicit */int) min((((/* implicit */long long int) (+(max((1778220824U), (((/* implicit */unsigned int) (unsigned short)29599))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)42249))))), ((+((-9223372036854775807LL - 1LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
    {
        var_42 *= ((/* implicit */int) (~((((-(var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_18] [(signed char)19]))))))))));
        var_43 = (short)(-32767 - 1);
        var_44 = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) >= (((((/* implicit */_Bool) arr_29 [i_18] [i_18])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_19 = 3; i_19 < 8; i_19 += 3) 
    {
        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            for (long long int i_21 = 1; i_21 < 7; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 2; i_22 < 8; i_22 += 3) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned int) (-(-7901772123337182021LL)));
                                var_46 = ((/* implicit */int) (+((((~(var_4))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 4) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 398988827U)) || ((_Bool)1)));
                                var_48 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) / (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42248)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_39 [i_19] [i_20] [i_21 + 2])), (arr_37 [i_19] [i_20] [i_21 + 2]))))) : (((((/* implicit */_Bool) arr_53 [i_21 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_20])) + (((/* implicit */int) arr_11 [i_25]))))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (16597009099746543299ULL)))))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((-686307629) <= ((~(((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
}
