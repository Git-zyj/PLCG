/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66396
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
    var_20 = 16494899258369083537ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((1951844815340468087ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36743)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27716))) : (2788201954U)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)8]))) / (arr_4 [15LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3]))))))));
                            arr_13 [i_0] [5] [5] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) var_2);
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_18))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [(signed char)1] [i_1])) : (((/* implicit */int) var_19)))) : ((+(((/* implicit */int) (signed char)-12))))))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])), (16494899258369083556ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0]))))))))));
                            var_23 ^= ((/* implicit */unsigned int) (((((~(((int) var_12)))) + (2147483647))) << (((max((max((1951844815340468060ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_4)))) - (1951844815340468060ULL)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) arr_1 [(signed char)4]);
                arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)48867), ((unsigned short)48867)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4607243801077401388ULL)) ? (9661109517289981691ULL) : (1951844815340468059ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48854))) : (8785634556419569932ULL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (6508936671568543026ULL)));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 1] [i_4]))) : (9661109517289981689ULL)))) ? ((-(((/* implicit */int) arr_16 [i_4 - 1] [i_4])))) : ((-(((/* implicit */int) arr_16 [i_4 + 1] [i_4]))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((unsigned long long int) (unsigned short)48853)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4])) >> (((/* implicit */int) arr_15 [i_4])))))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11864))));
            var_28 = ((/* implicit */long long int) arr_17 [i_4] [3U]);
        }
        for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            var_29 = ((/* implicit */int) ((((127) | (((/* implicit */int) (signed char)-109)))) <= (((/* implicit */int) arr_22 [i_6] [i_4] [i_4]))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    for (int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), ((~(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-97))))), ((~(-4019507178585970038LL)))))))));
                            arr_31 [i_4] [i_4] [17LL] [17LL] [i_9] = ((arr_27 [i_4] [i_8 + 1] [i_8] [i_4]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned int i_11 = 2; i_11 < 24; i_11 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((unsigned short) max((arr_21 [i_7]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27716))) | (3549301414214735591ULL))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_7] [8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (((13209174767883644849ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49128)))))))) ? ((((_Bool)1) ? (8785634556419569932ULL) : (388142595926818893ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_15))))));
                            arr_38 [i_4] [i_10] [i_7] [i_6] [i_4] = ((/* implicit */signed char) var_9);
                            arr_39 [i_7] [(unsigned char)20] [(unsigned short)19] [i_7] [0LL] [0LL] [i_4] = var_10;
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) var_15);
            }
            for (unsigned int i_12 = 2; i_12 < 24; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_13 = 4; i_13 < 23; i_13 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) | (((arr_21 [i_4]) + (var_10)))));
                    var_35 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (var_9))));
                    arr_44 [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_6 - 2] [i_6 - 1] [i_4 + 1] [i_13 - 4])) && (((/* implicit */_Bool) ((short) (unsigned short)16410)))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_48 [i_4] [i_4] [i_12] [i_14] [0LL] [i_12 - 1] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_25 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30194))))))) / (arr_41 [i_4] [i_6] [i_4])));
                    arr_49 [23U] [23U] [i_12] [i_4] [18ULL] [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1793558618U)) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_4] [i_4] [(signed char)3] [i_4] [i_12] [i_14] [i_14])))));
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                }
                arr_50 [i_12] [i_4] [i_12] = arr_25 [i_4];
                arr_51 [i_4] [i_4] [i_4] [i_4] = ((unsigned int) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_4] [i_6])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4])))))) : ((-(arr_41 [i_4] [24ULL] [i_4])))));
                var_37 = ((/* implicit */long long int) arr_17 [i_6] [14ULL]);
            }
            for (unsigned int i_15 = 2; i_15 < 24; i_15 += 3) /* same iter space */
            {
                var_38 ^= ((int) (((+(var_13))) / (((((/* implicit */_Bool) (signed char)79)) ? (var_13) : (var_9)))));
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)48862)) : (((/* implicit */int) arr_52 [i_4] [i_6]))))) ? (((/* implicit */int) max(((short)31239), (((/* implicit */short) arr_15 [i_4]))))) : (var_9)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)14)), (arr_32 [i_4] [(short)23] [(short)23] [(short)23])))) ? (((/* implicit */int) (short)26541)) : (((/* implicit */int) (short)26560)))) : (((/* implicit */int) (unsigned char)111))));
                var_40 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(68340698)))), ((+(arr_19 [i_4 + 1] [(unsigned char)0])))));
                var_41 = ((/* implicit */unsigned char) ((unsigned long long int) ((1125899898454016LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))))));
            }
            arr_54 [i_4] [i_4] = var_0;
        }
        arr_55 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18058601477782732722ULL)) ? (((/* implicit */int) (signed char)77)) : (2147483647)))) && ((!(arr_33 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))));
        var_42 = ((/* implicit */unsigned short) max((min((arr_20 [i_4 - 1] [i_4 - 1] [i_4]), (arr_20 [i_4 + 1] [i_4 - 1] [i_4]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_40 [i_4] [i_4] [i_4] [(signed char)6])) != (((((/* implicit */_Bool) (short)-26550)) ? (((/* implicit */unsigned int) var_6)) : (arr_19 [i_4] [i_4]))))))));
    }
}
