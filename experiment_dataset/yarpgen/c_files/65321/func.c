/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65321
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
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)1963);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) (unsigned short)65535);
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                arr_10 [(unsigned short)3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                var_14 ^= ((/* implicit */short) arr_9 [i_0]);
                var_15 = ((/* implicit */signed char) arr_2 [10LL]);
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1]))));
            }
            for (unsigned int i_3 = 2; i_3 < 24; i_3 += 1) 
            {
                arr_15 [(unsigned char)24] [i_1] = ((1724840470U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */short) ((((arr_13 [i_0] [i_1] [i_3 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1]))))) ? (arr_4 [i_0 + 2] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_3] [i_0] [i_0]) > (((/* implicit */long long int) arr_6 [i_3]))))))));
                arr_16 [i_0] [24LL] [i_3 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1724840458U))));
            }
            arr_17 [(unsigned char)1] = ((/* implicit */unsigned char) (signed char)-92);
            var_17 = (+(((/* implicit */int) arr_1 [i_0])));
            var_18 = ((/* implicit */unsigned int) arr_7 [i_1] [i_0] [i_0] [i_0]);
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
        {
            arr_21 [i_0 - 3] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)127)) && (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_4]))), (max((arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_4]), (arr_12 [i_0 + 1] [i_0 + 2] [i_0 - 3] [i_4])))));
            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_4])) + ((~(((/* implicit */int) (unsigned short)65531))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)112))))), (((((/* implicit */_Bool) 9659487103721233645ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        }
        arr_22 [i_0 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)0)), (2239080146U)));
        var_20 = min((((/* implicit */long long int) (_Bool)1)), (-5341410170708059047LL));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 24; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 24; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_21 = -3123861108593951408LL;
                            var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))) != (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_6] [i_0])) * (((/* implicit */int) arr_18 [i_8]))))) ? (((/* implicit */int) min(((short)-17305), (((/* implicit */short) (_Bool)0))))) : (max((((/* implicit */int) (short)32767)), (-1593154845)))))));
                            arr_33 [i_6] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (short)8192)))), (((/* implicit */int) (signed char)29))));
                            arr_34 [10] [(unsigned char)10] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_6])) <= (((/* implicit */int) arr_24 [i_0] [i_0]))))))) + (max(((~(((/* implicit */int) (short)-15405)))), (((/* implicit */int) (signed char)127))))));
                        }
                    } 
                } 
            } 
            var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5))))) ? (((-1517827990038263458LL) - (((/* implicit */long long int) arr_30 [i_0] [i_0 - 3] [(unsigned short)3] [i_5] [i_5 - 1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)127)))));
            var_24 = (((~(9223372036854775807LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-14981))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            arr_37 [i_0] [i_9] = ((/* implicit */signed char) (-(1100316005)));
            arr_38 [i_9] [(_Bool)1] [i_0 - 3] = ((/* implicit */long long int) (unsigned short)63488);
            var_25 = ((/* implicit */unsigned short) (~(8604734215771514868LL)));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(2055887162U))))));
        }
    }
    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)53907))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_10] [i_10] [i_10]))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32754)) | (((/* implicit */int) (unsigned char)113))))), (((2570126803U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
        arr_41 [i_10] = ((/* implicit */_Bool) arr_1 [i_10]);
    }
    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_11] [i_11] [i_11]))) + (2453999064696229484LL))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)247)) << ((((+(-3123861108593951408LL))) + (3123861108593951412LL))))))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_11] [(short)6] [(unsigned short)16] [(short)20]))))), (arr_27 [i_11 + 1] [i_11] [(signed char)10] [i_11])))) <= (3710338461840056487LL)));
        arr_46 [(unsigned char)3] = ((/* implicit */unsigned short) max((3123861108593951404LL), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (unsigned short)19918)), (2055887157U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2239080146U)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (unsigned char)205))))))))));
        var_31 = ((/* implicit */long long int) arr_9 [i_11]);
    }
    for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 4) 
    {
        arr_51 [i_12] [i_12] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_20 [(unsigned char)15] [i_12 + 1] [i_12 - 1]))))));
        arr_52 [i_12 - 1] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_39 [i_12])), ((unsigned char)205))))));
        var_32 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
    }
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(-67108864))))))) : (((/* implicit */int) ((15636402440424219174ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10285)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)783))) : (2570126825U)))))))));
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -7347091292681563646LL))))) * (((/* implicit */int) var_9))));
}
