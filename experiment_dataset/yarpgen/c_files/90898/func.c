/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90898
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)-27520)) > (((/* implicit */int) (short)-27520)))))))) ? (((/* implicit */int) (short)25760)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)27505)), ((unsigned short)37390)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((((((int) var_11)) / (((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) arr_1 [i_0 + 1] [(short)6])) : (((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) (unsigned short)37392)) : (((((/* implicit */_Bool) (short)25770)) ? (((/* implicit */int) (unsigned short)28170)) : (arr_0 [i_0 - 2])))))));
        var_17 = ((/* implicit */short) 18446744073709551615ULL);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_13)))))))) ? (((((/* implicit */_Bool) (-(650804840U)))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) arr_1 [(_Bool)1] [(signed char)0]))));
        arr_3 [(short)0] [(short)0] &= ((/* implicit */unsigned char) min((((unsigned long long int) arr_2 [i_0 - 3] [i_0 + 1])), (min((((/* implicit */unsigned long long int) (unsigned short)28145)), (9007199254609920ULL)))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [0U] = ((/* implicit */short) ((((/* implicit */int) var_7)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */short) (unsigned short)37381);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) (unsigned char)250);
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-11067))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (650804840U)))) ? (((/* implicit */long long int) arr_14 [i_4] [i_3] [i_1])) : (max((((/* implicit */long long int) (short)-11067)), (var_1))))) : (((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)10))))))))))));
                    arr_17 [i_1] [20U] [i_1] [(_Bool)1] [i_4 - 2] [i_3] = ((((/* implicit */unsigned long long int) ((int) var_7))) + (((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (arr_9 [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 - 2] [i_2 + 1] [i_4] [i_4]))))));
                    arr_18 [i_1] [i_1] [i_1] [(unsigned short)1] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(arr_5 [i_1] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_1] [i_4])))) : (max((((/* implicit */unsigned long long int) var_10)), (20ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) min(((short)27533), (var_3)))))))));
                    arr_19 [i_1] [i_1] [i_3] [i_4 + 1] = arr_12 [i_1] [0U] [0U] [i_4];
                }
            }
            /* vectorizable */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [20] [20U] [i_1] [i_5] [i_5 - 1] [(unsigned char)1])) && (((/* implicit */_Bool) var_14))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */_Bool) 18437736874454941696ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_9 [i_5] [(unsigned char)15] [i_1])))))))));
            }
            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) (short)-24913)) ? ((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_2 + 1] [i_2 - 2])))) : (((((/* implicit */int) (unsigned short)37365)) / (((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_14 [i_1] [i_1] [(unsigned char)15])))) || (((/* implicit */_Bool) max((arr_22 [i_1] [(unsigned char)12] [i_2 + 1]), (((/* implicit */unsigned int) var_9))))))))));
        }
        arr_23 [(short)18] [i_1] = ((/* implicit */short) ((_Bool) (unsigned short)37362));
    }
    for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            arr_28 [i_7 + 1] [i_6] = ((/* implicit */unsigned char) arr_15 [12] [i_6 - 1] [i_6 - 1] [i_6] [(unsigned char)9] [i_7]);
            arr_29 [i_6] [i_7] = ((/* implicit */short) (unsigned char)246);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) || (((/* implicit */_Bool) ((((arr_20 [i_6] [i_7 + 1] [(unsigned short)14]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_6] [4U]))))) / (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_3))))))))));
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_25 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25760)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_9]))))) : (((arr_5 [(short)13] [(unsigned short)6]) - (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((arr_1 [(short)0] [i_9]) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_7 - 2] [i_6 + 1])) : (((/* implicit */int) ((1679885969589859209ULL) >= (((/* implicit */unsigned long long int) arr_22 [i_6 + 1] [(short)8] [i_6 + 1]))))))) : (((/* implicit */int) ((unsigned char) var_3))));
                        var_26 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(2ULL))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)23170))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((_Bool) 2ULL)))))));
                        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-10165)))), (((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_6 + 2] [i_7 - 2])) ? (-1006432968) : (((/* implicit */int) var_6))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10173))) : (arr_22 [i_6] [i_8] [i_6]))), (((/* implicit */unsigned int) min(((unsigned char)246), (arr_4 [i_9])))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? (1553158189) : (((/* implicit */int) (short)24299)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31461))))))))));
                    }
                } 
            } 
        }
        var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_12 [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 1]))) ? (((/* implicit */int) ((short) -1553158185))) : (((((/* implicit */_Bool) ((unsigned short) (short)10165))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2ULL))))) : (-270879521)))));
        var_30 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-10187)), (3)))) : ((-(18446744073709551614ULL))))));
    }
    var_31 -= (~(((((((/* implicit */int) var_10)) == (((/* implicit */int) (short)-10165)))) ? (((unsigned int) (unsigned char)0)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
