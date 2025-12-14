/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91727
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-((((!(((/* implicit */_Bool) 7295770200650551544LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2))))) : (450328048))))))));
        var_16 = ((/* implicit */signed char) min((min((var_7), (((/* implicit */unsigned short) (signed char)103)))), (((unsigned short) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min((var_12), (arr_12 [i_3 - 2] [i_1] [i_3 - 4] [i_3 + 1] [i_1] [i_3 - 2])))), (min((arr_11 [i_4] [i_4] [i_4] [i_3 - 4] [i_1] [i_1]), (((/* implicit */unsigned short) arr_12 [i_3 - 1] [i_1] [i_3 - 2] [i_3 - 3] [i_1] [i_3 - 3]))))));
                            var_18 -= ((/* implicit */unsigned char) (-(((-7295770200650551544LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))));
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_2] [i_2])), (((((/* implicit */_Bool) (signed char)67)) ? (1748579268) : (((/* implicit */int) (short)1085))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-2496)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) : (-1867958211))) >= (((((/* implicit */_Bool) 7295770200650551532LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)1078)))))))) * (min((((/* implicit */long long int) ((int) (signed char)-12))), ((~(-7295770200650551544LL)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                var_21 = (+((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1])))));
                arr_15 [i_0] [i_0] [i_0] |= ((/* implicit */int) var_12);
                var_22 = ((/* implicit */int) max((var_22), ((+(var_4)))));
            }
        }
        for (short i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
        {
            var_23 *= ((/* implicit */signed char) 1479383728);
            var_24 = ((/* implicit */long long int) min((((/* implicit */int) (short)-32758)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32097)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((short)-1086), (((/* implicit */short) (signed char)116)))))))));
            var_25 = (((!(((((/* implicit */_Bool) -7295770200650551544LL)) && (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_8), ((short)32766)))) < (((((/* implicit */_Bool) -7295770200650551546LL)) ? (var_4) : (((/* implicit */int) (signed char)-100))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
        }
        for (short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */int) ((((/* implicit */long long int) (+((~(((/* implicit */int) var_6))))))) ^ (((long long int) 1804694584))));
            arr_20 [i_0] [i_0] [i_0] |= ((/* implicit */int) (signed char)84);
        }
        for (short i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
        {
            arr_25 [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_0] [i_0])))) : (-7295770200650551521LL)))));
            var_27 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)65527)), (9223372036854775807LL)));
            var_28 = ((/* implicit */int) var_10);
        }
        var_29 -= (+(-586366857597826511LL));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-2)))), ((~(((/* implicit */int) arr_16 [i_0])))))))));
    }
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((715634412) & (((/* implicit */int) (unsigned char)237))))) ? (((((/* implicit */int) var_6)) >> (((/* implicit */int) var_14)))) : (((/* implicit */int) min((var_11), (var_7)))))))))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), ((+(((/* implicit */int) var_7))))))) ? (min(((~(((/* implicit */int) var_1)))), ((-(((/* implicit */int) (unsigned char)54)))))) : (((/* implicit */int) (unsigned char)243))));
    var_33 = ((((/* implicit */int) (((~(((/* implicit */int) var_11)))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)48707)) : (((/* implicit */int) var_7))))))) << ((((~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_10))))))) + (27274))));
}
