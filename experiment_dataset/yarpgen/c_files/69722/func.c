/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69722
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned short) max((((arr_2 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_20 |= ((/* implicit */int) arr_1 [i_0]);
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((10611896773671491305ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) > ((-(arr_0 [i_0] [i_0])))));
        arr_3 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (signed char)81)) - (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_22 *= ((/* implicit */signed char) ((short) ((unsigned short) arr_4 [i_1] [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1])))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2])) ^ (((/* implicit */int) arr_7 [(unsigned char)13] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1613187643)) <= (2239843536049473730ULL)))) : (1613187647)));
                        var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-19901))));
                        arr_13 [i_1] [i_1] |= (+(830767320535142081LL));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((int) arr_9 [i_2] [i_2] [i_2 + 2] [i_2 + 2])))));
                    }
                } 
            } 
            arr_14 [(short)11] [i_2] [i_2] |= ((/* implicit */_Bool) arr_6 [i_1]);
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 3635017505363494764LL))));
                            arr_23 [7U] [i_6] [i_5] [i_2] [i_1] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+((((+(((/* implicit */int) arr_6 [i_1])))) * ((+(((/* implicit */int) (_Bool)1)))))))))));
        arr_24 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [20LL] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50536)))))) ? (((int) arr_7 [i_1] [17LL])) : (((((/* implicit */int) (signed char)79)) * (((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned short i_8 = 4; i_8 < 22; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_29 -= ((/* implicit */unsigned long long int) min((((2241389804U) & (((/* implicit */unsigned int) 1777681492)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 1; i_11 < 22; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (-(-3635017505363494761LL))))));
                            var_31 = ((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_8 - 3] [i_9 - 3])), (((((/* implicit */_Bool) (unsigned short)47744)) ? (((/* implicit */int) arr_4 [i_8 + 2] [i_9 - 1])) : (((/* implicit */int) arr_4 [i_8 + 2] [i_9 + 3]))))));
                        }
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_26 [i_8] [i_8] [i_8]))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5157)) ? (((/* implicit */int) (short)27317)) : (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 3 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_42 [i_13] [i_13] [i_13] [i_13] [i_13] &= ((/* implicit */unsigned char) (unsigned short)53877);
                            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_21 [i_1] [i_8 - 3] [i_12])), (var_4)))) ? (arr_37 [i_1] [i_8 + 1] [14LL] [i_14]) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) * (arr_39 [i_1] [i_8 - 3] [i_1] [i_13]))) << (((((((/* implicit */_Bool) -3366315223298988901LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19901))) : (10543942935865527810ULL))) - (18446744073709531692ULL))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            arr_46 [9U] [9U] &= ((/* implicit */_Bool) arr_28 [i_1] [i_15] [i_15]);
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) arr_16 [i_15] [i_1]))));
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~(4294967295U))))));
            var_37 *= ((/* implicit */short) arr_28 [i_1] [i_1] [i_15]);
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_38 = ((/* implicit */int) arr_10 [i_16]);
        var_39 -= ((/* implicit */signed char) arr_36 [i_16] [i_16] [i_16]);
    }
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max((((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned short)31673)))), (((/* implicit */int) var_15)))))));
    var_41 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27315)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) var_2)))))))) * ((~(((/* implicit */int) (unsigned char)0))))));
}
