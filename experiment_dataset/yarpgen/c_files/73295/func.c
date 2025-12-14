/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73295
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1885248405)) & ((((_Bool)1) ? (8215259843272706258LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37084)))))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 2071134510))));
            arr_5 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1534743911258241107ULL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (3774594074U))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)29876)) ? (3774594074U) : (((/* implicit */unsigned int) var_3))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) & (-2958361246652499204LL)));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) 1494597089);
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1634487939U)) ? (8631289408656787388LL) : (((/* implicit */long long int) 396556313))))) > (((unsigned long long int) (_Bool)1))));
                            var_20 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned short)50089)))) + (2147483647))) << (((var_2) - (17178618802739197721ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11022665081021094901ULL)))))) : (((((/* implicit */_Bool) (unsigned short)29215)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 549940074);
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) (short)13425)))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)-21839))));
                    }
                } 
            } 
            arr_31 [i_8] = ((/* implicit */_Bool) (+((+(var_10)))));
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 4) 
            {
                arr_38 [i_12] [i_12] [i_12] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21283)) ? (6442450944LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                arr_39 [i_0] [i_0] [i_12] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) > (((((/* implicit */long long int) var_11)) & ((-9223372036854775807LL - 1LL))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_44 [i_13] [i_13] [i_12] [i_11] [18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 199854779)) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)150)))) : (((((/* implicit */_Bool) 14845891020716852169ULL)) ? (((/* implicit */int) (unsigned short)39407)) : (((/* implicit */int) (signed char)-44))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5454284214022602429LL)) ? (((/* implicit */int) (short)-21433)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */_Bool) (signed char)90)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            var_26 = ((unsigned short) var_10);
            /* LoopNest 2 */
            for (short i_15 = 4; i_15 < 22; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                        {
                            arr_51 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */short) (+(var_2)));
                            var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)21839))))) ? (-378750668) : (((/* implicit */int) ((306993850U) > (3987973445U))))));
                            var_28 &= (_Bool)1;
                        }
                        for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            arr_54 [i_0] [i_0] [i_15 + 3] [i_16] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-6))))) ? ((~(((/* implicit */int) (unsigned short)37084)))) : (((/* implicit */int) (unsigned char)75))));
                            var_29 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 4177796286U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (4503599627239424LL))));
                            var_30 = ((/* implicit */unsigned int) ((long long int) (~(11022665081021094933ULL))));
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 24; i_19 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_32 = ((((/* implicit */_Bool) 687126043094924899LL)) ? (((/* implicit */int) (unsigned short)25143)) : (((/* implicit */int) (unsigned short)49961)));
                            arr_57 [i_0] [i_19] [i_19] [i_16] [i_19] = ((/* implicit */short) ((int) (signed char)-110));
                        }
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)247)))))));
                    }
                } 
            } 
        }
    }
    for (int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
    {
        arr_60 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 10836132194012259885ULL)) ? (15599687295525592435ULL) : (((/* implicit */unsigned long long int) 8547989402908118654LL)))));
        arr_61 [3LL] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)150))))) ? (3825527826U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-10860)), ((unsigned short)64135))))));
    }
    for (int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_7))), (max((((/* implicit */unsigned long long int) (unsigned char)249)), (7610611879697291710ULL))))))));
        arr_64 [i_21] [i_21] = ((/* implicit */unsigned long long int) min((3987973427U), (0U)));
        /* LoopSeq 1 */
        for (unsigned int i_22 = 1; i_22 < 23; i_22 += 4) 
        {
            var_35 = ((/* implicit */short) ((unsigned long long int) (short)31588));
            arr_67 [i_21] [i_21] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) max((2451504640U), (((/* implicit */unsigned int) (short)-31589))))))))));
            arr_68 [i_21] [(unsigned short)19] [(unsigned short)19] = min((min(((-(((/* implicit */int) (unsigned char)106)))), (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))))))), (((int) (short)-30788)));
            var_36 = ((/* implicit */int) min((((/* implicit */long long int) (short)-2463)), (min((min((((/* implicit */long long int) (_Bool)1)), (8547989402908118637LL))), (((/* implicit */long long int) ((306993868U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)31596))))))))));
        }
    }
    for (int i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            for (long long int i_25 = 0; i_25 < 24; i_25 += 4) 
            {
                for (short i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    {
                        var_37 = ((/* implicit */short) ((((unsigned long long int) min((((/* implicit */unsigned int) var_11)), (3987973427U)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (11022665081021094901ULL) : (((/* implicit */unsigned long long int) 4398046511104LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)964))) : (var_10)))) : (var_0)))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (var_0))) - (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))))) ? (min((max((var_0), (9007199254740736ULL))), (((/* implicit */unsigned long long int) max((3987973419U), (((/* implicit */unsigned int) (short)-20309))))))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(131071ULL)))))));
                        arr_77 [i_23] [i_23] [11U] [(unsigned short)16] [11U] [0U] = ((/* implicit */int) ((((((_Bool) 9223372036854775807LL)) ? (min((4571553823304521336ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)120))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4064)) ? (-6688452582202986093LL) : (((/* implicit */long long int) var_6))))))), (((((/* implicit */_Bool) (unsigned short)56995)) || (((/* implicit */_Bool) (short)-1)))))))));
                    }
                } 
            } 
        } 
        var_40 += ((/* implicit */signed char) 13612295436758885944ULL);
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) -8547989402908118654LL)) ? (((/* implicit */unsigned int) var_4)) : (var_9)))))) & (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))) : (max((((/* implicit */long long int) (signed char)65)), (0LL)))))));
        var_42 += ((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)));
        var_43 = ((/* implicit */_Bool) ((unsigned long long int) (+(131072ULL))));
    }
    var_44 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((unsigned long long int) 18446744073709420553ULL)) : (((/* implicit */unsigned long long int) var_10))))));
    var_45 += var_4;
    var_46 = ((/* implicit */_Bool) min((18446744073709420553ULL), (((/* implicit */unsigned long long int) 587351482))));
}
