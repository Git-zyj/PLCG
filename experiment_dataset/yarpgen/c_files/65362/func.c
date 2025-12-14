/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65362
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)32767), (((/* implicit */unsigned short) (short)-6663)))))) | (max((min((((/* implicit */unsigned long long int) (unsigned char)44)), (16985756597323144910ULL))), (((/* implicit */unsigned long long int) (short)-3799))))));
                                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)9558)) ? (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (7075834941644222536ULL))) : (((/* implicit */unsigned long long int) -10)))), (((/* implicit */unsigned long long int) (short)16235))));
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 + 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_5 [i_0]))));
                                var_22 = ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((((/* implicit */_Bool) (short)-3810)) ? (((/* implicit */int) (unsigned short)59478)) : (((/* implicit */int) (short)-3782)))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned short)59474)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((unsigned long long int) arr_18 [i_1] [i_0])) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))));
                        var_25 = ((/* implicit */_Bool) (unsigned short)65535);
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) ((unsigned short) (unsigned short)0));
                        var_27 = ((/* implicit */int) min((var_27), (((1809942037) - (((/* implicit */int) (unsigned short)13426))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 3; i_11 < 20; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 20; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-14303)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (16110197972367447030ULL))) | (((/* implicit */unsigned long long int) arr_0 [i_9]))));
                        var_29 = ((/* implicit */_Bool) ((short) (short)3798));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)59480)) : (((/* implicit */int) (short)-5263))));
                            var_31 = ((/* implicit */_Bool) ((-1796848300520037040LL) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_9 + 3] [i_11 - 1] [i_12] [i_12])))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)53)))))) / (((long long int) (_Bool)1))));
                        }
                        for (long long int i_14 = 2; i_14 < 19; i_14 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (+(8049443833720419125LL))))));
                            var_34 = ((/* implicit */short) var_16);
                            var_35 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)22)) && (((/* implicit */_Bool) (unsigned char)6))))));
                        }
                        for (short i_15 = 1; i_15 < 21; i_15 += 1) 
                        {
                            var_36 |= ((/* implicit */unsigned long long int) arr_20 [i_9 + 2] [i_9] [i_11 - 3]);
                            var_37 -= ((/* implicit */short) (~(((/* implicit */int) (short)-22221))));
                            var_38 = ((/* implicit */short) ((var_10) | (((/* implicit */int) arr_30 [i_12 + 1] [i_11 + 2]))));
                            var_39 -= ((/* implicit */unsigned char) (((_Bool)1) ? (-8049443833720419139LL) : (((/* implicit */long long int) 4294967295U))));
                        }
                        var_40 = (_Bool)0;
                    }
                    var_41 = ((/* implicit */int) max(((+((-(arr_22 [i_9] [i_9]))))), (var_9)));
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned int i_17 = 3; i_17 < 20; i_17 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
                            {
                                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(10034065671318556405ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_9 + 2] [i_10] [i_16])))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)29466))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19325)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)46521))))) : (min((-8049443833720419125LL), (((/* implicit */long long int) (unsigned short)36069))))))));
                                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_18] [i_17] [i_17] [i_10] [i_9 - 1])) ? (max((min((((/* implicit */unsigned long long int) arr_49 [i_17] [i_17])), (arr_28 [i_17] [i_10]))), (((/* implicit */unsigned long long int) -4019968251724116620LL)))) : (((/* implicit */unsigned long long int) var_15))));
                                var_44 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29466))) | (7878143825928807751LL)))) ? (((/* implicit */unsigned long long int) -1136741280387539814LL)) : (7698139129742194188ULL)));
                            }
                            for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                            {
                                var_45 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_37 [i_9] [i_9] [i_9] [i_9])), (((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                                var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3422828126083339171LL)) ? (433683209178551488LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) + (3864318349989306119LL))))), (((long long int) 7113744237869919688ULL)))))));
                                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) max((arr_15 [i_9]), (((/* implicit */unsigned int) var_5)))))));
                            }
                            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                            {
                                var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-433683209178551488LL)))) && (((/* implicit */_Bool) max(((short)13221), ((short)-13223))))));
                                var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((int) (unsigned char)78)))) ? (((/* implicit */unsigned long long int) -5630902595413569233LL)) : (11669507995931729043ULL)));
                            }
                            var_50 = ((/* implicit */unsigned short) min((17124247594858527628ULL), (((/* implicit */unsigned long long int) max((-8663539417646995758LL), (((/* implicit */long long int) (short)13216)))))));
                            var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1796848300520037042LL), (1887290337496885772LL)))) ? (3248488709351733382LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)179)) && (((/* implicit */_Bool) (unsigned short)8190))))))));
                            var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -433683209178551499LL)) ? (((/* implicit */int) (unsigned short)29466)) : (((/* implicit */int) (unsigned short)36067)))))) ? (max((10355651925216391308ULL), (((/* implicit */unsigned long long int) (unsigned char)245)))) : (((((/* implicit */_Bool) var_9)) ? (arr_46 [i_9 - 2] [(signed char)10] [i_9 + 3] [i_9] [17] [i_9 + 3]) : (arr_46 [i_9] [21] [i_16] [i_17] [i_16 + 1] [i_17 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 20; i_21 += 1) 
                {
                    for (short i_22 = 1; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_53 |= ((/* implicit */unsigned char) (unsigned short)2238);
                            var_54 = ((/* implicit */long long int) 8091092148493160308ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (short i_24 = 4; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26629)) ? (arr_46 [i_9 - 1] [i_9] [i_9 + 2] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2236)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26628)))))) : (var_9)))));
                            var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((((/* implicit */long long int) (-(-1043008667)))) % (3864318349989306119LL))))));
                            var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((short) 1771196793)))));
                            /* LoopSeq 2 */
                            for (long long int i_25 = 2; i_25 < 20; i_25 += 2) 
                            {
                                var_58 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_17)) == (((/* implicit */int) var_4)))));
                                var_59 = ((/* implicit */short) min((((/* implicit */int) min((arr_52 [i_9]), (arr_52 [i_24])))), (((int) ((_Bool) 8091092148493160288ULL)))));
                                var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (((((/* implicit */_Bool) (short)-32750)) ? (192025790U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) ? (((((/* implicit */_Bool) (short)-26629)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-26617)))) : (((/* implicit */int) (short)31021))));
                                var_61 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)247)) >> (((116020429) - (116020414)))));
                            }
                            for (long long int i_26 = 2; i_26 < 20; i_26 += 2) 
                            {
                                var_62 = ((/* implicit */_Bool) arr_40 [i_9] [i_9]);
                                var_63 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-106)), (((unsigned char) arr_43 [i_9] [i_26 + 1] [i_24 - 3] [i_23] [i_9 - 1] [i_9] [i_9]))));
                            }
                            /* LoopSeq 2 */
                            for (short i_27 = 2; i_27 < 21; i_27 += 4) 
                            {
                                var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_31 [i_9 - 2] [i_23] [i_9 - 2])), ((+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22405))) : (10305567662670412057ULL))))))))));
                                var_65 = min((((/* implicit */short) (unsigned char)102)), (((short) (unsigned char)11)));
                            }
                            for (short i_28 = 0; i_28 < 22; i_28 += 1) 
                            {
                                var_66 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8091092148493160312ULL))));
                                var_67 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46899)))))));
                                var_68 = ((/* implicit */unsigned long long int) ((((_Bool) (+(((/* implicit */int) (short)-26624))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_9 + 1] [i_9 + 2] [i_9 + 3] [(unsigned char)5] [i_9]))) : (max((((/* implicit */long long int) (short)24898)), (arr_3 [i_28] [i_9 - 1])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_69 |= ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned char)11)) >> ((+(((/* implicit */int) (unsigned char)0))))));
    var_70 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65525))));
}
