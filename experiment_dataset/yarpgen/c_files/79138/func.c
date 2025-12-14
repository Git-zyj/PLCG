/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79138
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
    var_16 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned long long int) (unsigned short)49656))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-22781)))) : (((unsigned long long int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned char) 6);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (18446744073709551612ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((arr_3 [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-950770880) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_20 ^= ((/* implicit */unsigned long long int) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1]) : (arr_3 [i_1])));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30284)) ? (arr_8 [i_2]) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2]))) >= (1297109815U))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((arr_11 [i_3 - 1] [i_3 - 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22781)) ? (((/* implicit */long long int) arr_9 [i_2])) : (2157673103024026935LL))))));
            arr_13 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_11 [i_2] [i_3]) : (arr_11 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_12 [i_2]));
        }
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6U])) ? (arr_8 [16ULL]) : (arr_8 [(signed char)0])))) ? (((((((/* implicit */_Bool) arr_8 [(short)10])) ? (arr_12 [(unsigned short)20]) : (((/* implicit */unsigned long long int) arr_9 [i_2])))) + (arr_12 [16LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [20U])) <= (arr_11 [i_2] [i_2])))))));
        /* LoopSeq 3 */
        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            var_25 &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (unsigned short)15879)) : (((/* implicit */int) (short)255))))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [(unsigned short)5])), (arr_12 [8LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1703373064)) && (((/* implicit */_Bool) 0ULL)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) 1149287517U))))));
            var_26 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
            arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((14910651107802654370ULL), (arr_11 [i_4 + 1] [i_4 - 1])))) ? (arr_11 [i_4 + 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2)) % (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1])))))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                var_27 = ((/* implicit */short) arr_8 [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((min((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                            var_29 = arr_18 [i_2] [i_4 + 1];
                        }
                    } 
                } 
            }
        }
        for (int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            var_30 -= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) arr_12 [12ULL])) ? (125829120) : (((/* implicit */int) arr_19 [(unsigned char)20]))))));
            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_8] [i_8] [i_8 - 1] [12] [i_8])) ? (((/* implicit */int) arr_24 [i_2] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_24 [i_2] [i_2] [i_8 - 1] [i_8 + 1] [i_2] [i_8 - 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) >= (268435456U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-103)) : (var_11)))))))));
        }
        for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) arr_12 [i_2]);
            var_32 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-103)) >= (((/* implicit */int) arr_19 [i_2])))));
            arr_33 [i_2] [i_2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_9] [i_9] [i_2] [i_9 - 1] [i_9] [i_2])) || (((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_9 + 1] [i_2] [i_9 + 1])))));
        }
        arr_34 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_26 [i_2] [i_2]), (((/* implicit */long long int) (unsigned short)41142)))), (((((/* implicit */_Bool) (unsigned short)15879)) ? (((/* implicit */long long int) arr_8 [i_2])) : (arr_10 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_2]) > (((/* implicit */long long int) 1065473386)))))) : (((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) arr_27 [i_2]))))) ? (arr_28 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2])))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_33 ^= ((/* implicit */signed char) ((-2115565945958231565LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53595)))));
        var_34 = ((/* implicit */unsigned char) ((signed char) arr_27 [(short)2]));
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */int) arr_22 [4ULL] [i_10] [i_10] [4ULL] [i_10] [(_Bool)1] [i_10])) & (((/* implicit */int) arr_22 [20LL] [i_10] [i_10] [20LL] [20LL] [i_10] [i_10])))))));
        var_36 = ((/* implicit */short) ((unsigned long long int) arr_22 [8] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            {
                var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_41 [i_11] [i_12]), (arr_41 [i_11] [i_12])))) ? (((((/* implicit */_Bool) arr_41 [i_11] [i_11])) ? (arr_41 [i_11] [i_12]) : (arr_41 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                arr_42 [i_11] [i_12] [i_12] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) (unsigned char)2)), (min((var_0), (((/* implicit */unsigned long long int) arr_4 [i_12] [i_12]))))))));
            }
        } 
    } 
}
