/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91677
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 -= max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)16]))))), ((+(((/* implicit */int) var_3)))));
        var_19 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((unsigned int) var_1))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (min((431810506239207360LL), (((/* implicit */long long int) -1141755597)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_1])), (var_14)))) || (((/* implicit */_Bool) arr_5 [i_2])))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (-425717186) : (((/* implicit */int) var_10))))) >= (min((((/* implicit */long long int) -827477793)), (var_2)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_22 = ((((/* implicit */_Bool) -223133676)) ? (0ULL) : (15ULL));
                arr_13 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) != (var_4)));
            }
            var_23 = ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))));
            arr_14 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_5 [i_1]) : (arr_5 [i_2])))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) == (-2674567312248755234LL)))));
            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (1ULL) : (3ULL)));
        }
        arr_15 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (var_6))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)20725)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53481)))));
            arr_18 [i_1] [i_4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_4 - 2]))));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_6]))));
                var_27 = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */short) (signed char)39))))) ? (((2674567312248755232LL) | (((/* implicit */long long int) 3070949776U)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_10))))))))), (((/* implicit */long long int) var_6))));
            }
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) max((min((((/* implicit */unsigned int) -2096036979)), (1971809014U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_1] [i_5])))))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 170580010305686452LL)) ? (((/* implicit */int) (signed char)-19)) : (arr_11 [i_1] [i_1] [i_7] [i_8]))), (var_15))))));
                            arr_31 [i_1] [i_5] [i_7] [i_8] [i_8] [i_9] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_5] [i_7] [i_8] [i_9])) ? (arr_21 [i_9] [i_8] [i_7] [i_1]) : (arr_21 [i_1] [i_7] [i_7] [i_8]))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_7] [i_8])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_3 [i_7]), (((/* implicit */unsigned long long int) (-(-2096036979)))))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_36 [i_11] [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned int) 15ULL);
                        var_31 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        var_32 = min((((((/* implicit */_Bool) arr_11 [i_12 - 1] [i_1] [i_7] [i_10])) ? (arr_11 [i_12 - 1] [i_1] [i_7] [i_10]) : (arr_11 [i_12 - 1] [i_1] [i_7] [i_10]))), ((+(arr_11 [i_12 + 1] [i_1] [i_7] [i_10]))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (var_13)));
                    }
                }
            }
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) | (((((/* implicit */int) (!(((/* implicit */_Bool) -2674567312248755233LL))))) - (((/* implicit */int) min((arr_37 [i_1] [i_13] [i_14]), (((/* implicit */unsigned short) arr_27 [i_5] [i_1]))))))))))));
                        var_35 = min((((/* implicit */int) arr_17 [i_1])), ((~(((/* implicit */int) arr_22 [i_1] [i_1] [i_13] [i_14])))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)61383), (((/* implicit */unsigned short) var_16))))), ((~(((/* implicit */int) arr_1 [i_1])))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) (~(((int) arr_25 [i_1] [i_1] [i_5]))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 13236156951930399867ULL))))) == ((+(((/* implicit */int) ((var_15) <= (var_6))))))));
            var_39 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_9)))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            arr_48 [i_15] [i_15] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15] [i_15]))) : (var_1)))))), (((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_1])) ? ((~(arr_8 [i_15]))) : (min((((/* implicit */long long int) 1048575)), (var_4)))))));
            arr_49 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_44 [i_1] [i_1] [i_15] [i_1]))), ((~(arr_44 [i_1] [i_1] [i_1] [i_15])))));
            arr_50 [i_1] [i_15] &= ((/* implicit */signed char) arr_46 [i_1]);
            var_40 = ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24871))) == (arr_0 [i_1])))) - (((/* implicit */int) ((((/* implicit */unsigned int) -373469915)) != (arr_7 [i_1] [i_15] [i_15])))))) & ((((!(((/* implicit */_Bool) var_0)))) ? (min((var_7), (((/* implicit */int) (unsigned short)30399)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) >= (var_9)))))));
            arr_51 [i_1] [i_1] = ((max((((((/* implicit */int) var_10)) | (((/* implicit */int) arr_1 [i_15])))), (max((((/* implicit */int) var_5)), (arr_16 [i_1] [i_15]))))) - (max(((-(((/* implicit */int) arr_4 [i_15])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_15] [i_15]))))))));
        }
    }
    var_41 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(var_14)))) ? (min((((/* implicit */long long int) var_7)), (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_12)), (var_13))))))));
}
