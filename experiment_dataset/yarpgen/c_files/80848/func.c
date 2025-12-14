/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80848
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) (unsigned short)20847))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)37058)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_11)))))) | (((/* implicit */int) (short)18718))));
                var_14 = ((/* implicit */unsigned int) var_5);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_6))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_17 ^= ((/* implicit */unsigned short) (-(max((21ULL), (((/* implicit */unsigned long long int) (unsigned char)82))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1924065355U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28470))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (132120576U)))))), (((((/* implicit */_Bool) ((unsigned char) -6715526182022182602LL))) ? ((((_Bool)1) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1023))))) : (((/* implicit */unsigned long long int) ((unsigned int) 4162846716U)))))));
                                var_19 = 3589294139U;
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))), (((var_0) << (((((/* implicit */int) var_5)) - (11227))))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((((1216905612428300005LL) - (((/* implicit */long long int) 1640489102U)))) > (((/* implicit */long long int) min((((var_1) ? (((/* implicit */int) (unsigned short)49776)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) (short)-18719))), ((unsigned short)28481)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 285379486U)))) : (6715526182022182609LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min((max((var_7), (var_6))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39576))) == (4294967291U))))))) << (((((/* implicit */int) (signed char)118)) - (100)))));
                                var_24 = ((/* implicit */unsigned int) max(((unsigned short)16383), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)937)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        var_25 += ((unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            arr_28 [i_9] [i_3] [i_9] [i_8 - 1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_1))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((4294967291U), ((((_Bool)1) ? (540185746U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                        arr_33 [(unsigned short)14] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) var_1)) : (-771494657)))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned int) (-(2593589445438779411LL)));
                                arr_41 [i_12 + 1] [i_13] [i_12 + 1] [i_13] = ((((/* implicit */unsigned long long int) -2114440868233615039LL)) | (var_12));
                                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11297)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9554))) : ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (2114440868233615038LL)))));
                                arr_42 [i_0 - 2] [4LL] [i_0 - 2] [i_12 + 1] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(18446744073709551589ULL)))) ? (((3844968792U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 16; i_15 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) (+(((2114440868233615040LL) | (((/* implicit */long long int) 2906505731U))))));
                                arr_48 [i_0 + 1] [i_1] [i_11] [i_0 + 1] [i_14] [i_15] = ((/* implicit */unsigned short) (-(var_12)));
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned long long int) (-(1831237443)))))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned short)48260)) : (((/* implicit */int) var_5))))) ? (565375485U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_51 [i_0] [i_1] [i_11] [i_11] [i_11] [i_16] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (-7715350459202800923LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17270))));
                        var_33 -= ((/* implicit */unsigned short) ((-1831237444) > (((/* implicit */int) ((unsigned char) 3609855966655385580LL)))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2985041678U)) ? (((2090388284U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11993))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            arr_55 [i_17] [(unsigned short)1] [(unsigned char)7] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned short) ((long long int) var_11)));
                            arr_56 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [(unsigned char)5] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2290030773U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
                            arr_57 [i_0 - 2] [i_11] [i_11] [i_16] [i_17] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3686492104U)) ? (3164435751U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)184)))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_36 += ((/* implicit */unsigned short) (((~(4294967276U))) - (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((unsigned char) 1804846570U))));
                            var_38 *= ((/* implicit */signed char) (-(((/* implicit */int) ((1335935248U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (2090388299U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3890)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)65240))))) : (((((/* implicit */_Bool) var_4)) ? (1804846581U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))))))))));
                        }
                    }
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                        var_41 = ((/* implicit */_Bool) (~(2490120708U)));
                        arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) var_12)) ? (2090388284U) : (88657328U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                }
                for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 572493200)), (var_12))) >= (var_12)))), (max((((((/* implicit */_Bool) (unsigned short)65505)) ? (2321831754U) : (23U))), (((/* implicit */unsigned int) var_7))))));
                    arr_68 [i_0] [i_1] [11ULL] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (12775961371872390921ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)211)), (4093103429U))))))), (4294967294U));
                }
                var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (((+(4206309980U))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)77)), ((unsigned short)42592)))) - (56))))))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)130)), (var_10)))) ? (((int) 88657318U)) : (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) || (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_4)))))))));
}
