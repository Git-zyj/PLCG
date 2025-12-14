/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60295
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) (((+(arr_3 [i_0] [i_0]))) - (((4174435958U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
        arr_5 [0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (arr_2 [i_0] [i_0]))) + (arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)22)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_1])), ((short)-15))))) : ((+(2341174179908044194ULL))))), (max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)31925))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) * (9729880387131333370ULL)))))));
        var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((25ULL) == (((/* implicit */unsigned long long int) 9053461142330018376LL))))) << (((((/* implicit */int) arr_7 [i_1])) - (51839)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) ((_Bool) (short)13))), (max((2297895416U), (((/* implicit */unsigned int) (signed char)-86)))))));
                    arr_15 [22ULL] [i_3] [i_3] [11ULL] = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) % (120531341U)));
        arr_19 [16ULL] = ((/* implicit */unsigned char) ((signed char) (unsigned short)1365));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)201))));
                    arr_27 [(_Bool)1] [i_6] [(unsigned char)5] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)102))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) 391215492)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (18U)))));
                                arr_33 [i_8] [i_6] [i_6] [i_6] [14LL] [i_6] [(unsigned char)16] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) : (arr_32 [i_4] [i_5] [i_6] [i_6] [i_6]))));
                                arr_34 [i_8] [i_6] [7] [i_5] [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_4] [i_4] [(unsigned char)4] [i_4] [i_4] [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (unsigned char i_10 = 2; i_10 < 14; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (signed char)95)))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11] [5ULL] [i_10] [4] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)197)))) : (5309353006984556189ULL))))));
                        arr_42 [12U] [(_Bool)1] [i_10 + 3] [i_11] [i_11] [6LL] = ((/* implicit */unsigned long long int) ((arr_32 [i_10 + 1] [i_10 + 3] [i_10 + 2] [i_9] [(_Bool)1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28988)))));
                        arr_43 [i_4] = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_25 [i_4] [i_9] [i_10] [i_11])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    {
                        var_21 = ((unsigned char) (_Bool)1);
                        arr_53 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (unsigned char)1);
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 3; i_15 < 14; i_15 += 3) 
    {
        arr_57 [14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)3)), (-1217276582))), (((((/* implicit */_Bool) arr_31 [i_15] [i_15] [(_Bool)1] [(unsigned char)13] [i_15] [(unsigned char)2] [i_15 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [12]))))))) ? (((min((((/* implicit */long long int) arr_22 [(unsigned char)2] [12ULL] [i_15])), (2802184648964392646LL))) / (min((6171787943533498654LL), (((/* implicit */long long int) (unsigned short)65478)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) + (((/* implicit */int) (unsigned short)22682))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)92)))) : (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (arr_20 [i_15] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42728))))))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 4; i_18 < 16; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            {
                                arr_69 [i_15] [i_15] [i_15 + 1] [i_15 - 1] [i_15] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((arr_47 [(signed char)2]) ? (-1217276572) : (((/* implicit */int) (signed char)-43))))) ? (((/* implicit */int) arr_22 [(_Bool)1] [i_18 - 1] [4])) : ((((_Bool)1) ? (1217276568) : (((/* implicit */int) (unsigned short)64202)))))));
                                arr_70 [(unsigned char)7] [12ULL] [i_17] [i_18] [i_19] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_16] [(signed char)10] [3U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_15] [i_16] [i_17] [(signed char)17]))) : (arr_52 [i_15] [11]))) >> (((((/* implicit */int) ((signed char) arr_60 [(signed char)9] [i_16] [i_18] [i_18]))) + (120)))))), (max((((/* implicit */unsigned long long int) (signed char)-23)), (286337520311263739ULL)))));
                                var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (max(((unsigned char)22), ((unsigned char)255)))))) ? (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)44435))))) : (max((9ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)30090)))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) min((min(((~(602852186U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)231))))) != (((((/* implicit */_Bool) 9ULL)) ? (0ULL) : (9131615953235595761ULL))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) (~((((~(1217276598))) / ((~(((/* implicit */int) (unsigned char)29))))))));
    }
    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)26)) ^ (((/* implicit */int) var_0))))))) ? (692413699986190532ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)79))))) ? (((/* implicit */int) max((var_14), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15155580580644895511ULL))))))))));
    var_26 = ((/* implicit */unsigned int) var_0);
    var_27 *= var_6;
}
