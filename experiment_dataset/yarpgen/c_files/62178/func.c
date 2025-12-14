/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62178
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_7))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : ((+((+(var_3)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */short) var_7);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_12 ^= ((/* implicit */unsigned char) max((arr_3 [(_Bool)1]), (((/* implicit */long long int) ((signed char) arr_1 [i_0])))));
                    var_13 *= ((/* implicit */unsigned int) arr_4 [i_2]);
                    arr_11 [i_2] [i_1] [(unsigned char)11] [(short)17] [(signed char)10] = ((/* implicit */int) max((((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 697873504U)) : (arr_3 [i_0])))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_0]))));
                }
                arr_12 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [i_0]) : (arr_10 [13U])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(short)17])) ? (((((/* implicit */_Bool) arr_3 [6])) ? (var_2) : (((/* implicit */unsigned long long int) 3008678127U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4579690806067414034LL)) ? (1970324836974592LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [16LL] [i_0] [i_0])) ? ((-(10026645653763741965ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [16U] [16U] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))))))));
            }
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                arr_16 [i_1] [14U] [14U] [i_1] = (+(15309681511567006946ULL));
                var_14 += ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (unsigned char)99)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [13U]))) : (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) min(((short)7680), (((/* implicit */short) var_9)))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_14 [i_0]))));
                    var_16 = ((/* implicit */signed char) max(((~(var_1))), ((~(arr_1 [i_0])))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((arr_3 [i_4 - 1]) | (9037537808615870905LL))) / (min((arr_3 [i_4 + 1]), (arr_3 [i_4 - 2]))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_7 [(unsigned char)12] [(unsigned char)12] [17ULL] [18LL]))));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(0U)))))) ? (arr_17 [i_0] [i_1] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23811)))));
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) var_2);
                    var_21 = ((/* implicit */signed char) min((var_21), (arr_7 [11ULL] [i_1] [i_4] [i_6])));
                    var_22 = ((/* implicit */long long int) var_9);
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_4 + 2] [i_0])) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) (short)7685)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2ULL)) || (((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */_Bool) 3342167915U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7686))) : (arr_17 [i_0] [i_0] [i_4] [i_6])))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_3))));
                }
            }
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11626671858757326852ULL)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */int) ((arr_4 [i_8]) ? (((((unsigned int) 1636270855U)) << (((((((/* implicit */_Bool) var_5)) ? (15309681511567006946ULL) : (((/* implicit */unsigned long long int) arr_26 [5] [i_1] [i_7])))) - (15309681511567006929ULL))))) : (arr_5 [i_0] [(signed char)6])));
                            var_26 -= (unsigned char)99;
                        }
                    } 
                } 
            } 
            arr_29 [(signed char)8] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_0 [17] [i_1]) : (arr_17 [i_0] [i_1] [12] [i_1])))) | (max((var_2), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_0] [7ULL])))))) : (min((var_2), (13ULL)))));
            arr_30 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_1), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))) ? (((arr_0 [(short)1] [i_1]) & (arr_0 [i_0] [i_1]))) : (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(var_1))), (((var_7) ^ (((/* implicit */unsigned long long int) 267911168))))))) ? (min((((/* implicit */unsigned long long int) 144080003703767040LL)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(320095317))))))))));
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 18; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_28 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_11 + 1])) ? ((~(arr_35 [i_12] [i_12]))) : ((+(var_2)))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), ((+(arr_19 [i_0] [i_0] [i_0])))));
                        arr_37 [i_11 - 1] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_10] [i_11 - 1] [i_12])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5))))), (188614718U))))));
                        arr_38 [i_0] [i_0] [i_11 + 2] [i_12] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */unsigned int) min((((min((arr_25 [i_10] [i_12]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) >> (((((/* implicit */int) arr_32 [i_11] [i_10])) - (55))))), (arr_35 [i_0] [i_10])))) : (((/* implicit */unsigned int) min((((min((arr_25 [i_10] [i_12]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) >> (((((((/* implicit */int) arr_32 [i_11] [i_10])) - (55))) + (167))))), (arr_35 [i_0] [i_10]))));
                    }
                } 
            } 
        }
        for (int i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_13 + 3])) ? (((/* implicit */unsigned long long int) arr_14 [i_0])) : (var_3)));
            var_31 &= ((arr_5 [i_0] [i_0]) == (arr_26 [i_0] [i_0] [i_0]));
        }
        var_32 ^= ((/* implicit */unsigned int) (~(min((min((var_8), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) arr_26 [(_Bool)1] [i_0] [i_0])), (var_7)))))));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (short)12293))))));
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32747)) >> (((((/* implicit */_Bool) 703805974U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (var_1)))));
    var_35 = ((/* implicit */_Bool) var_4);
}
