/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60311
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
    var_14 |= ((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)7514)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (short)7514)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)2))))))) + (min((((/* implicit */long long int) ((_Bool) (short)-25724))), (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_13))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)163)) ? (6917529027641081856LL) : (6917529027641081856LL))))) + (((/* implicit */int) ((unsigned short) var_5))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (short)19890)) + (((int) (_Bool)0))));
    var_17 ^= ((/* implicit */signed char) 2118842663);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            arr_14 [(short)6] [i_1] [4U] [i_3] [i_2] &= ((/* implicit */signed char) ((((int) 4294967295U)) + (((/* implicit */int) (!(((/* implicit */_Bool) -1172191407810557462LL)))))));
                            var_18 = ((/* implicit */_Bool) var_13);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (-6917529027641081859LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4 - 2] [i_4 - 2] [(_Bool)1] [i_4 - 3])))));
                            var_20 &= ((/* implicit */unsigned short) arr_13 [i_1] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_4 + 2] [i_4]);
                            var_21 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)21)) < (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5890)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)0)))) : (((((/* implicit */_Bool) (short)1008)) ? (3977962154U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)6)) << (((/* implicit */int) ((((/* implicit */int) (short)6162)) == (((/* implicit */int) var_7)))))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)251)) ? (6917529027641081856LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
                            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)593)) == ((-2147483647 - 1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1)))))));
                        }
                        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */unsigned int) var_3)) : (4294967295U)))) ? (((arr_9 [(unsigned char)17] [(short)0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (arr_2 [i_3] [i_2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3451145711U))))));
                    }
                    for (signed char i_7 = 3; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1] [(signed char)6] [i_7 - 2])) || (((/* implicit */_Bool) (unsigned char)87))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-25857)) - ((-(1624200572))))))));
                    }
                    for (signed char i_8 = 3; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (short)7936))));
                        var_30 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))));
                    }
                    var_31 = ((/* implicit */signed char) var_1);
                    arr_24 [i_0] [i_2] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)174))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) ((int) 8242588365785160481LL));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) var_1))));
        arr_25 [i_0] [15LL] = ((/* implicit */unsigned int) ((unsigned char) var_0));
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 19; i_10 += 1) 
        {
            var_34 = ((((((/* implicit */int) arr_12 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])) != (((/* implicit */int) arr_12 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_21 [i_10 + 1] [i_10 - 1] [i_10 - 1])));
            arr_30 [i_9] = ((/* implicit */unsigned int) 134217728);
            arr_31 [i_10 - 1] &= ((/* implicit */signed char) ((((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-56))))) == (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (short)2450)), (253952U)))))));
        }
        arr_32 [i_9] [11] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [i_9] [(signed char)17] [i_9]))) : (8165274325826793499LL)))) ? (((/* implicit */int) min(((unsigned char)16), ((unsigned char)255)))) : (((int) arr_10 [i_9] [i_9] [(unsigned short)18] [i_9] [i_9] [i_9])))));
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) (unsigned char)239);
        arr_36 [i_11] = ((/* implicit */unsigned char) ((long long int) min((((((/* implicit */unsigned long long int) var_3)) / (var_1))), (((/* implicit */unsigned long long int) ((4294967279U) < (((/* implicit */unsigned int) arr_0 [i_11] [i_11]))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */short) ((signed char) var_13));
        var_37 = ((/* implicit */unsigned short) ((short) ((signed char) (short)12127)));
        arr_39 [i_12] [i_12] = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) + (8388607U))));
    }
}
