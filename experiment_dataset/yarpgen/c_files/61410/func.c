/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61410
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
    var_18 = ((/* implicit */signed char) (unsigned char)128);
    var_19 = ((/* implicit */long long int) var_5);
    var_20 -= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (signed char)106)), (((long long int) 643961765U)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (1005740156U)))) ? (((/* implicit */long long int) ((unsigned int) (signed char)106))) : (((((/* implicit */_Bool) (unsigned short)64638)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (-7967187341712515536LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_0] = ((/* implicit */short) max((arr_13 [i_1] [i_0 + 3] [i_2] [i_1] [i_0 + 3]), (((/* implicit */unsigned short) (unsigned char)128))));
                                arr_16 [i_0] [i_0] [i_2] [(signed char)7] [i_4] [(signed char)8] = max((((((/* implicit */_Bool) (unsigned char)127)) ? (max((var_3), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 2])))), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) var_2)), ((unsigned short)28784))), (((/* implicit */unsigned short) ((_Bool) (unsigned char)101)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 4; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max(((short)32767), (((/* implicit */short) (unsigned char)255)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [17LL] [17LL] [17LL])) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_1])) : (((/* implicit */int) (unsigned short)36752))))) ? (((/* implicit */int) arr_11 [i_5 - 3] [i_5 - 3] [(unsigned char)4] [i_6 + 4] [i_7 + 1])) : (((/* implicit */int) (unsigned short)57095))));
                            arr_25 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)155);
                            arr_26 [i_0] [i_1] [i_5] |= ((/* implicit */long long int) ((unsigned int) 4187547135U));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_5] [i_6 + 1] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)2] [0ULL])) ? (((/* implicit */unsigned long long int) 3334812204U)) : (2373509453975699680ULL)))) ? (((/* implicit */int) (unsigned char)34)) : (arr_23 [i_1] [i_1] [i_5 - 4] [i_0] [i_6 + 3])));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1]))));
                            arr_30 [i_8] [i_1] [i_5] [i_1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 5350023656176343721LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (2122994719550800932ULL)));
                        }
                        arr_31 [i_6] [i_5] [i_6] [i_6 + 4] = ((/* implicit */unsigned int) (signed char)-107);
                        arr_32 [i_0] [i_1] [i_0 + 3] [i_5] = arr_21 [i_0] [(_Bool)1] [3U] [i_1] [(_Bool)1] [i_6];
                    }
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_5] [i_9] = ((/* implicit */unsigned char) arr_4 [i_0]);
                        arr_36 [i_5 - 4] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-5026540411216622788LL), (-5026540411216622788LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4576251260844134638ULL)))) : (arr_22 [i_1] [i_0 - 1] [i_0 - 2])));
                        var_24 -= ((/* implicit */signed char) (unsigned char)128);
                    }
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0 - 1]));
                        arr_40 [i_10] [i_10 + 4] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)127);
                    }
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-106)), ((unsigned char)5)))) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (arr_12 [i_5] [3LL] [i_1] [3LL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22517))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6823)))))), (-2240418927820487132LL)));
                    arr_41 [i_0] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (5725927281211910655ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)22517))))) : (16323749354158750683ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */int) (short)13368))))) : (max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)209)) : (1423635767)))), (16323749354158750683ULL))));
                    arr_42 [(signed char)7] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_18 [i_5] [i_5 + 1] [i_5])))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)58705)), (arr_12 [(_Bool)1] [i_5 + 1] [i_1] [i_1] [i_0]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10647)) ? (((/* implicit */int) (short)29459)) : (((/* implicit */int) (short)29459))))))))));
                }
                for (unsigned char i_11 = 4; i_11 < 19; i_11 += 1) /* same iter space */
                {
                    var_27 *= ((/* implicit */_Bool) arr_20 [i_0] [i_1] [(signed char)9]);
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 0U)), (4576251260844134638ULL)));
                }
                /* LoopSeq 2 */
                for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-29455))))))) ? (((/* implicit */unsigned long long int) (-(5026540411216622787LL)))) : ((((+(12449920275069946357ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29454)) ? (((/* implicit */int) arr_45 [i_0] [i_0] [i_12 - 1] [(short)2])) : (arr_27 [i_0] [i_0] [i_1] [i_12 - 2] [i_12 + 2]))))))));
                    var_30 *= ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (615651645U))), (((/* implicit */unsigned int) (short)-29454)))));
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    var_31 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)6823)))) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_0] [2])) : (((/* implicit */int) ((_Bool) 12029382508484857723ULL)))));
                    arr_50 [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                }
            }
        } 
    } 
}
