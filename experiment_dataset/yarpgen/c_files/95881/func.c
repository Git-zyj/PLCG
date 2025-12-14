/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95881
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5))))))), ((~(((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_0] [i_1] [i_2 + 1])))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((+(((arr_2 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                }
                for (short i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    var_18 = ((unsigned char) max((((/* implicit */long long int) (unsigned short)57899)), (var_12)));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)44)))))))));
                                var_19 |= ((/* implicit */int) ((((((((/* implicit */unsigned long long int) -2338776889709993736LL)) & (8474894290402708227ULL))) <= ((~(var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned char)251))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((8474894290402708200ULL) & (var_5))) : (((/* implicit */unsigned long long int) ((-6464292) | (-6464284))))))));
                                var_20 |= (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_1] [i_4 - 1] [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [(short)10] [i_1] [i_3] [i_4] [i_5]))) : ((((!(((/* implicit */_Bool) var_15)))) ? ((+(5927151996220516667LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) & (var_1)))))));
                            }
                        } 
                    } 
                    var_21 = max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) 12978225607000656099ULL))))))));
                    var_22 = ((/* implicit */int) var_12);
                    arr_20 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned int) 682909650)) >= (arr_17 [i_0] [i_1] [i_3] [i_0] [6] [i_3] [i_3])))) : (((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (var_15)))))) : (var_5)));
                }
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    arr_24 [i_6] [i_6] [i_0] [i_0] = ((/* implicit */int) (+((-(14971510851746232374ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_30 [i_0] [(unsigned char)6] [i_6] [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 5985910751865212441LL)))) && ((!(((/* implicit */_Bool) 682909650))))));
                                var_23 |= ((/* implicit */long long int) min((((/* implicit */int) ((1437661347) >= (776728594)))), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)171)) == (((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) min((var_24), ((-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))))) & (max((-5985910751865212455LL), (-2149404371047170372LL)))))))));
                }
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)13550))));
                var_25 = ((/* implicit */unsigned long long int) ((long long int) max((var_3), (var_3))));
                arr_32 [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_9))))))) & (((/* implicit */int) ((unsigned char) (signed char)59)))));
            }
        } 
    } 
    var_26 = var_8;
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_11)), (arr_11 [i_9] [(unsigned short)3]))), (min((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (unsigned char)98))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 2; i_11 < 10; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7156818431462844907LL))));
                        var_29 = ((/* implicit */int) max((var_29), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 529629861U)))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (var_12)));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            arr_47 [i_9] [i_10] [i_11 + 1] [i_13] [i_14] = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */_Bool) 976624448)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_0)) >> (((3765337422U) - (3765337409U))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((~(var_1))) : (-757104904)))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((-976624449), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)49))) != (4956669920481457143LL)))))))));
                            var_32 = ((/* implicit */int) min((arr_17 [i_9] [i_10] [i_13] [i_10] [i_13] [i_11] [3LL]), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)21673)))))));
                            arr_48 [i_13] [i_10] = ((/* implicit */unsigned char) (((-(((/* implicit */int) max(((unsigned char)142), (var_10)))))) >= ((~(var_15)))));
                        }
                        for (short i_15 = 3; i_15 < 8; i_15 += 1) 
                        {
                            arr_51 [i_10] [i_13] [i_13] [(short)3] = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) var_15)) - (529629861U)))))) ? (var_5) : (((min((((/* implicit */unsigned long long int) -8301627196111867837LL)), (18432692491856063837ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                            arr_52 [i_9] [i_9] [i_10] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) <= (((/* implicit */int) var_8)))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            arr_57 [i_9] [i_13] [i_11] [i_13] [i_16] [i_16] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-8301627196111867837LL) ^ (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_13]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13])))))) - (min((96008656U), (((/* implicit */unsigned int) var_15))))))));
                            var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) (-((-(((/* implicit */int) var_16))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), (((arr_22 [6ULL] [i_10] [i_11] [i_13]) <= (((/* implicit */long long int) 750736316)))))))))));
                        }
                        var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) (+(arr_40 [i_9] [i_10] [i_11] [i_11] [i_13]))))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        arr_60 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2149404371047170377LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16562))) : (2149404371047170376LL))), (((/* implicit */long long int) var_13))))) ^ ((~(max((var_5), (5457629665409138585ULL)))))));
                        var_35 = ((/* implicit */unsigned char) (unsigned short)34401);
                        arr_61 [i_10] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_9] [1U] [i_11 - 1] [i_17] [i_11] [i_9]))) : (arr_40 [i_17] [i_10] [i_11] [i_17] [i_17]))) * (((/* implicit */unsigned long long int) (-(var_1))))))));
                    }
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_1)) | (var_4))) >= (((/* implicit */unsigned long long int) (+(80415705)))))))));
                }
                for (long long int i_18 = 2; i_18 < 10; i_18 += 2) /* same iter space */
                {
                    arr_65 [i_9] [i_9] [i_9] = var_7;
                    /* LoopSeq 4 */
                    for (signed char i_19 = 2; i_19 < 10; i_19 += 1) 
                    {
                        var_37 = (!(((/* implicit */_Bool) 2786001061U)));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4275897912110771335ULL)) ? (((/* implicit */int) (short)-21664)) : (((/* implicit */int) (short)-21664))));
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (-(var_1))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
                        {
                            arr_76 [i_9] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) var_12);
                            var_40 = ((/* implicit */unsigned long long int) (~(-6201916461182233272LL)));
                        }
                        arr_77 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)16989);
                    }
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) min((2149404371047170376LL), (-136720311679190487LL)));
                        var_42 += ((/* implicit */int) arr_18 [i_18]);
                    }
                    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */short) arr_14 [i_9] [i_10] [i_18] [i_23]);
                        arr_86 [i_9] [i_10] [i_9] [i_10] [i_9] [i_23] = max((min((((var_4) & (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) ((arr_41 [i_9] [i_9] [i_9] [i_9]) < ((~(var_2)))))));
                    }
                    var_44 = max((var_5), (var_6));
                }
                arr_87 [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31134)))))))) ? ((-(((/* implicit */int) max(((short)-13139), (((/* implicit */short) var_16))))))) : (((/* implicit */int) ((2421801754457121826ULL) < (((/* implicit */unsigned long long int) -842018147)))))));
            }
        } 
    } 
}
