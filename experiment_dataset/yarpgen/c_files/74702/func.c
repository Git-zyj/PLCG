/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74702
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
    var_20 = ((/* implicit */short) (unsigned char)240);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_18))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_22 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((signed char) (signed char)54))))), (((/* implicit */int) (short)-1536))));
            var_23 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)25441)), ((-(min((((/* implicit */long long int) var_4)), (var_12)))))));
            var_24 = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) 14884591434738612412ULL))))))));
                var_26 = ((/* implicit */_Bool) (~(var_16)));
            }
            /* vectorizable */
            for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_5);
                var_27 = ((/* implicit */signed char) ((3568938960257800485LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-30665)))));
                var_28 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_19))))));
                var_29 += ((/* implicit */unsigned char) ((unsigned int) (+(var_18))));
                var_30 ^= ((/* implicit */short) (~(-3568938960257800479LL)));
            }
        }
        arr_13 [i_0] = var_6;
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_18 [i_0] [i_0] [(signed char)5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) -3568938960257800486LL)))));
            arr_19 [i_0 - 1] [i_0 - 1] [14ULL] = (short)-1536;
        }
    }
    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) 3568938960257800485LL);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) max((var_32), ((unsigned char)0)));
                var_33 = ((/* implicit */long long int) max(((-(21ULL))), (((/* implicit */unsigned long long int) ((signed char) (_Bool)0)))));
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (-((+((+(-3568938960257800481LL))))))))));
            }
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (-(min((max((((/* implicit */long long int) (short)-30673)), (1638949348074263841LL))), (-3568938960257800481LL))))))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) (~(var_9))))), (max((min((var_12), (((/* implicit */long long int) (short)15728)))), ((~(var_12))))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                arr_33 [8LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) | (-3820981254609262845LL)))) && ((!(((/* implicit */_Bool) (unsigned char)255))))));
                var_37 = ((/* implicit */unsigned short) -6811475463455901427LL);
                var_38 = (-((-(-245954119))));
                arr_34 [i_5 - 1] [i_8] [i_5 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) (+(-2078498608462993344LL))));
                var_39 = ((/* implicit */_Bool) var_1);
            }
            for (unsigned char i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                var_40 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1079715164))))));
                arr_38 [i_5 - 1] = ((/* implicit */long long int) ((unsigned int) (short)-30676));
            }
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                arr_41 [i_11] = ((/* implicit */unsigned int) ((long long int) (+(-1721261068768888807LL))));
                var_41 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3568938960257800481LL))));
            }
            arr_42 [i_5] [i_5] = ((/* implicit */unsigned char) 2431552374U);
            arr_43 [i_8] = ((/* implicit */unsigned long long int) 1079715164);
            var_42 = ((/* implicit */short) (+(-1886065846683977658LL)));
            arr_44 [i_5] = ((/* implicit */_Bool) (-(var_18)));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_47 [i_12] [i_12] [(_Bool)1] = (unsigned short)5641;
            var_43 ^= ((/* implicit */signed char) var_12);
            arr_48 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1)))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 4; i_13 < 14; i_13 += 2) 
        {
            for (short i_14 = 1; i_14 < 11; i_14 += 3) 
            {
                {
                    var_44 ^= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)30646))))));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_16 = 2; i_16 < 11; i_16 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) ((long long int) var_7))))));
                            arr_60 [i_14] [i_14] = ((/* implicit */unsigned int) max(((-(min((((/* implicit */unsigned long long int) 4294967295U)), (16239988692286362551ULL))))), (max(((-(var_13))), (((/* implicit */unsigned long long int) max((155579788U), (((/* implicit */unsigned int) -1079715166)))))))));
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) 11LL))));
                        }
                        arr_61 [i_14] = ((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) -3568938960257800470LL))))));
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) 2431552374U))), (((unsigned long long int) 2206755381423189066ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        arr_64 [i_17] [i_14] [i_14] [i_5] = ((/* implicit */long long int) (+(2091922519)));
                        arr_65 [i_14] [i_14] [i_14] [i_14] [i_14] [(short)6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            arr_70 [i_5] [i_14] [i_17] [(signed char)0] [i_14] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-991938909316423LL)));
                            arr_71 [i_5] [i_17] [i_14] [i_14] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-30662))));
                        }
                        for (int i_19 = 1; i_19 < 14; i_19 += 2) 
                        {
                            arr_74 [i_14] = ((/* implicit */long long int) (unsigned short)48439);
                            arr_75 [i_14] [i_13] [i_14 + 3] [i_13] [i_19 - 1] = ((/* implicit */short) (~(4294967291U)));
                            arr_76 [i_5] [i_13] [i_14] [i_17] [i_19] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)185)) != ((+(((/* implicit */int) (unsigned char)187))))));
                            arr_77 [i_14] [i_13] [(signed char)4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1673885839626201977LL))))) | (((/* implicit */int) var_15))));
                        }
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 14; i_20 += 3) 
                    {
                        var_49 = ((/* implicit */short) max((min((((/* implicit */long long int) var_19)), (((1673885839626201954LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_1))));
                        arr_81 [i_20] [i_14] [i_14] [i_5 + 1] [i_14] [i_5 + 1] = ((/* implicit */long long int) ((unsigned char) (signed char)95));
                        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) (signed char)-71)), (var_16))))))))));
                    }
                    var_51 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))), (max((((/* implicit */unsigned int) min((var_2), ((unsigned char)62)))), (max((2396570614U), (var_7)))))));
                    arr_82 [(short)4] [i_13] [i_14] [i_5] &= ((/* implicit */short) (~(((/* implicit */int) ((short) (unsigned short)28999)))));
                    arr_83 [i_14] [i_14] = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-4)))))));
                }
            } 
        } 
    }
    var_52 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) 18446744073709551611ULL)))));
    var_53 &= ((/* implicit */unsigned char) (~(((int) (!(((/* implicit */_Bool) (unsigned short)4096)))))));
}
