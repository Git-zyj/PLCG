/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/905
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
    var_15 &= ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_16 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 2])))));
                var_17 &= ((/* implicit */unsigned int) ((((arr_0 [4]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)0] [i_1] [(short)12])) ? (3426045846U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (min((arr_3 [(unsigned char)14]), (((/* implicit */long long int) arr_5 [4U] [i_1 - 1])))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40483))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [8] [i_0 + 2] [i_0 - 1]))) : (min((var_9), (((/* implicit */unsigned int) arr_0 [(unsigned char)10])))))))));
            }
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 2])), (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((unsigned long long int) arr_2 [(short)16] [i_1] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
        }
        var_18 |= ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) (unsigned short)25052)) && (arr_0 [18LL]))) && (((/* implicit */_Bool) arr_1 [4])))));
        var_19 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 + 1] [i_0 + 1]);
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [16ULL])) ? (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_13)))))) : (((((((/* implicit */unsigned long long int) arr_11 [14U])) % (arr_7 [i_3] [i_4 + 3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [4ULL] [i_3] [4ULL])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [8LL])))))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (arr_3 [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_0 [(unsigned short)16])))))))), (((((/* implicit */_Bool) min((arr_8 [11LL] [11LL]), (((/* implicit */unsigned int) arr_4 [(short)14] [i_3] [i_4]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [12ULL]))))) : (min((((/* implicit */long long int) var_9)), (arr_3 [0]))))))))));
            arr_13 [i_4 - 2] [9] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_2 [6] [i_4 + 1] [6])), (max((var_2), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)10] [i_3] [i_4 - 2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_10 [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [8] [8])))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))) : (arr_10 [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_23 [i_6] [i_5] = ((/* implicit */unsigned int) ((int) arr_20 [i_7] [i_6 - 2] [i_5] [i_4] [i_3]));
                            arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) ((arr_14 [i_3] [i_5]) - (min(((~(var_7))), (min((arr_20 [i_7] [i_7] [(signed char)8] [i_7] [i_7]), (((/* implicit */int) var_3))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_3 [i_6]))) ? (((/* implicit */int) ((short) ((unsigned long long int) arr_17 [i_6] [i_5] [i_7])))) : ((+(arr_14 [i_5] [i_6 + 1])))));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_3] [i_4 - 1]))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_9 [i_3] [i_4 - 1])))) : (((((/* implicit */int) arr_9 [i_3] [i_4 + 3])) * (((/* implicit */int) arr_9 [i_7] [i_7]))))));
                        }
                        arr_25 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) arr_4 [i_6] [i_4 + 2] [i_4 + 3]))), (min((arr_14 [i_3] [i_4]), (arr_14 [i_4] [i_4])))));
                        arr_26 [i_3] [i_4 - 1] [i_5] [i_6] = ((short) (-(arr_14 [i_6 + 2] [i_6])));
                    }
                } 
            } 
            var_23 = ((/* implicit */int) 2510708911U);
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_30 [i_8] [12] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_11)), (arr_27 [i_3] [i_3]))), (arr_27 [i_8] [i_3])));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_3] [i_3] [i_8] [i_8] [i_3])) >> (((/* implicit */int) arr_22 [(unsigned char)10] [i_8] [i_8] [(unsigned char)10] [i_8]))))) * (((unsigned long long int) var_3))));
        }
        arr_31 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_3))) + (((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (arr_3 [(unsigned short)4]))))))), (((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [1U])))));
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_9]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_9]), (10916977850692368183ULL)))))))));
        var_26 = min((min((arr_10 [(signed char)1] [i_9]), (min((var_10), (((/* implicit */long long int) 3976435582U)))))), (((/* implicit */long long int) min((min((var_4), (((/* implicit */unsigned int) (unsigned short)65529)))), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_45 [i_9] [i_10] [i_11] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_19 [i_9] [i_9] [i_12]))))) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_43 [i_9])) : (arr_20 [i_9] [i_10] [i_10] [i_11] [i_12])))))) ? ((+(max((var_2), (((/* implicit */unsigned long long int) -1606844950251155903LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [(unsigned char)5] [(unsigned char)5] [i_9]), ((short)-23851)))) && (((/* implicit */_Bool) ((unsigned int) arr_36 [i_9])))))))));
                        var_27 = ((/* implicit */_Bool) (+(((int) arr_41 [i_9] [(_Bool)1] [i_10] [i_9]))));
                        arr_46 [i_9] [i_12] = ((/* implicit */_Bool) (+((+(arr_38 [i_9] [i_10] [i_9] [i_12])))));
                    }
                } 
            } 
            arr_47 [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (max((((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9])) ? (arr_7 [i_9] [0ULL]) : (((/* implicit */unsigned long long int) -8592162120699501641LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) arr_19 [i_10] [i_9] [i_9])))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_43 [18U])) ? (((/* implicit */unsigned long long int) arr_39 [i_9] [i_13] [i_9] [i_9])) : (10916977850692368183ULL))));
            var_29 -= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_10)), (arr_17 [(_Bool)0] [i_9] [i_9]))) << (((min((((/* implicit */unsigned long long int) arr_14 [i_13] [i_9])), (arr_17 [6LL] [i_13] [i_13]))) - (11381764772266534660ULL)))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_42 [i_9] [i_9] [(short)4])))))))));
            arr_50 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_27 [i_9] [i_13]))))))) >= (var_2)));
            var_31 ^= ((/* implicit */int) arr_17 [(unsigned short)8] [i_13] [i_13]);
        }
        for (unsigned int i_14 = 1; i_14 < 19; i_14 += 4) 
        {
            arr_53 [i_9] [i_9] = ((/* implicit */int) ((long long int) arr_7 [i_9] [i_9]));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_14))))) : (((-1606844950251155903LL) % (arr_3 [i_9])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) : (2135293860486616492LL)))), (((((/* implicit */_Bool) arr_52 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_9] [i_14] [i_9]))) : (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_9] [i_9] [i_14 - 1])) >> (((((((/* implicit */int) arr_35 [i_14 - 1] [i_9])) << (((((/* implicit */int) arr_49 [i_9] [i_14 + 1] [i_14])) - (207))))) - (1440113))))))));
        }
    }
}
