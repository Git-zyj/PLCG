/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83044
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        arr_8 [(signed char)14] [i_2] [i_1] [(signed char)14] |= ((/* implicit */signed char) (-(min((-1889200911703430972LL), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (-4903486601806817243LL)))))));
                        arr_9 [(signed char)4] [i_2 + 2] [i_0] [i_2] = ((/* implicit */long long int) (signed char)50);
                        arr_10 [i_0] [13LL] [(signed char)5] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((-3730350586299550867LL) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1] [i_0] [i_2 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) 1889200911703430976LL)))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_13 = max(((((~(9142116160730659726LL))) | (((((/* implicit */_Bool) -7526876736643546624LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (var_10))))), (((/* implicit */long long int) max((arr_6 [i_0] [i_0] [i_3] [i_3]), (((signed char) 3325891669173402162LL))))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((signed char) ((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)4] [10LL] [i_3 - 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)0] [(signed char)14] [10LL] [i_4]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [4LL] [(signed char)14] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_1] [5LL] [i_1] [(signed char)14])) : (((/* implicit */int) (signed char)100))))))))));
                            arr_14 [i_0] [i_0] [i_0] [2LL] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) 4014107742411860489LL)) && (((/* implicit */_Bool) arr_3 [12LL] [i_1] [(signed char)17])))))))));
                        }
                        for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            var_15 = (~(((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_0] [i_5 + 1])) ? (9142116160730659726LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [17LL] [i_2 + 2] [i_0] [i_5 + 4]))))));
                            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [18LL] [i_1] [i_2] [i_2] [i_0] [19LL] [i_5]))));
                        }
                        for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-16)) <= (((/* implicit */int) arr_15 [18LL] [i_0] [i_0] [i_0])))))))) / (5476486512443630117LL)));
                            arr_20 [15LL] [i_0] [19LL] [i_0] [4LL] = ((((min((((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3]))))), (min((((/* implicit */long long int) arr_15 [(signed char)12] [i_1] [i_0] [15LL])), (-5109163736217995869LL))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (signed char)-89)) ? (2615373800706530544LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [9LL] [i_1] [i_0] [4LL] [i_6]))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) / (arr_12 [i_2]))))));
                            arr_21 [i_2] [i_1] [i_2] [i_0] [i_6 - 3] [i_2 - 1] = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [0LL] [i_6]))) : (6772906114023355224LL))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_24 [i_0] [(signed char)13] [i_2] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_0] [i_7])) >> (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_0] [i_7])))))) : (((/* implicit */signed char) ((long long int) ((((((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_0] [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_0] [i_7])) + (34)))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_2 + 2] [19LL] [i_2 + 1])))) ? ((+(arr_3 [i_2 + 1] [i_2] [i_2 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2] [i_2 + 1])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_12)))))));
                        var_19 = ((/* implicit */long long int) ((signed char) arr_19 [10LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
                    }
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_1]))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_8] [(signed char)1] [13LL] = (~(1242601999687317677LL));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1889200911703430969LL)) ? (((((/* implicit */int) ((((/* implicit */_Bool) 6387279447374083414LL)) || (((/* implicit */_Bool) arr_0 [i_1]))))) >> (((((/* implicit */int) (signed char)40)) - (11))))) : (((/* implicit */int) ((signed char) ((long long int) (signed char)-23))))));
                            arr_32 [i_0] [0LL] [i_2] [8LL] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) -3325891669173402162LL));
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) arr_11 [i_2] [i_2 + 2] [i_2] [i_2 + 1] [10LL] [i_2 + 2] [i_2 - 1]);
                            var_22 -= ((/* implicit */signed char) arr_12 [5LL]);
                            var_23 = var_2;
                            var_24 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)35))))), ((+(arr_33 [i_0] [(signed char)10] [i_2 + 2]))))), (((/* implicit */long long int) min(((signed char)-85), (arr_2 [i_2 + 1] [11LL]))))));
                        }
                        var_25 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)16])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)-54))))) || (((/* implicit */_Bool) max((-3325891669173402162LL), (((/* implicit */long long int) arr_6 [i_0] [(signed char)0] [i_2] [i_8]))))))) ? (((long long int) arr_33 [6LL] [i_2 - 1] [14LL])) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0])))));
                        arr_35 [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (signed char)81);
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_1] [i_2] [i_11] = ((/* implicit */signed char) arr_0 [i_1]);
                        var_26 = ((/* implicit */signed char) min((var_26), ((signed char)85)));
                    }
                    var_27 = min((arr_16 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2]), (arr_16 [i_0] [i_0] [i_2] [(signed char)16] [i_1] [i_1]));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_28 ^= ((signed char) ((((/* implicit */_Bool) (~(-8201326002911007261LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5879770849492640870LL)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)43))))) : (var_4)));
                        arr_41 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((-8826743004114585155LL), (-3325891669173402163LL)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 2; i_13 < 9; i_13 += 3) 
    {
        for (long long int i_14 = 1; i_14 < 10; i_14 += 3) 
        {
            {
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) min(((signed char)109), ((signed char)3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-2332849854165100051LL) < (arr_46 [i_13] [3LL]))))) : (arr_45 [4LL]))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)26))))))));
                var_30 = -3815592257273641358LL;
            }
        } 
    } 
    var_31 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (signed char)-118))))))));
    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((/* implicit */long long int) ((min((var_6), (((/* implicit */long long int) (signed char)15)))) > (var_3)))), (var_7))))));
}
