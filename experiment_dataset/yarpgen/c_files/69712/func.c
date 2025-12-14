/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69712
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_9)))) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (~(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : ((~(var_9)))))));
            var_22 ^= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) / (-6155017917397742869LL)))));
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_14);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_2] [(signed char)1])), (var_17)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (-1278631391)))))))))));
            var_24 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_6 [i_0] [i_2])))) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) ((_Bool) var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2]))))) ? (((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) var_15)) - (26))))) : (((/* implicit */int) var_6))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_6 [i_0] [i_3]))));
            arr_9 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_14))))));
            arr_10 [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)180))))));
            arr_11 [i_0] [i_3] &= ((/* implicit */_Bool) ((unsigned char) (unsigned char)192));
        }
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((+(((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_27 ^= ((/* implicit */_Bool) ((long long int) -3588000689032329557LL));
            var_28 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7)))) || (((/* implicit */_Bool) ((1958362734) + (((/* implicit */int) var_10)))))));
            var_29 += ((/* implicit */unsigned short) (~(var_9)));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) arr_17 [i_4])))) ^ (((/* implicit */int) min((arr_12 [i_4]), (arr_12 [i_4]))))));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                var_31 += ((/* implicit */long long int) ((((/* implicit */int) max((arr_13 [i_6]), (((/* implicit */signed char) max(((_Bool)1), (var_0))))))) >> (((/* implicit */int) ((((/* implicit */int) var_17)) >= ((~(((/* implicit */int) (_Bool)1)))))))));
                var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_14 [(unsigned char)1] [i_6]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0)))))) : (((var_7) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((signed char)62), (((/* implicit */signed char) var_16)))))))));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (~((((_Bool)1) ? (2601197117997252506LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? ((-(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (arr_20 [i_8] [i_7] [i_4] [i_4])))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && (var_7)))) < (((/* implicit */int) (unsigned short)31))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        var_36 = var_15;
                        var_37 = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) | (((/* implicit */int) arr_13 [i_6])))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_8))) & (9101634777991273036LL)))))) ? (((((/* implicit */int) var_6)) ^ (var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))))));
                    }
                    arr_26 [i_4] [i_6] [i_7] [i_9] = ((arr_23 [(_Bool)1] [i_6] [i_6] [i_7] [(_Bool)1] [i_9]) ? (((/* implicit */int) max((((unsigned short) var_7)), (((/* implicit */unsigned short) arr_20 [i_4] [i_6] [i_7] [i_9]))))) : (((/* implicit */int) min((arr_19 [i_7]), (arr_19 [i_7])))));
                    var_39 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_11) ? ((~(262128LL))) : (((/* implicit */long long int) ((int) (signed char)91))))))));
                    var_40 = ((/* implicit */_Bool) max((((long long int) max((((/* implicit */unsigned short) var_0)), (var_12)))), (((/* implicit */long long int) (signed char)-64))));
                }
                arr_27 [i_4] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4] [(unsigned short)4]);
                var_42 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                var_43 = (signed char)-126;
                var_44 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_25 [i_11] [i_11] [i_11] [i_6] [i_4] [i_11] [i_4]) : (var_9)));
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4] [i_6] [i_11])) ? (((/* implicit */int) arr_18 [i_4] [i_6] [i_4])) : (((/* implicit */int) var_0))));
            }
            for (unsigned char i_12 = 4; i_12 < 23; i_12 += 3) 
            {
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((long long int) var_9)))));
                var_47 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)255)) - (248)))))), (var_1)));
            }
            var_48 = ((/* implicit */signed char) 7562514308190479035LL);
        }
        for (int i_13 = 1; i_13 < 23; i_13 += 3) 
        {
            var_49 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) != ((+(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                for (signed char i_15 = 1; i_15 < 22; i_15 += 1) 
                {
                    {
                        arr_42 [i_4] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) min(((+((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (((~(((/* implicit */int) var_10)))) != (var_14))))));
                        var_50 = ((/* implicit */_Bool) ((unsigned short) min((var_13), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_17)))))));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((((((/* implicit */long long int) ((int) arr_19 [i_4]))) + (((((/* implicit */_Bool) -9101634777991273031LL)) ? (-262123LL) : (var_1))))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_15] [i_14] [i_4] [i_4])))))))));
                        var_52 *= ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((min((var_9), (((/* implicit */long long int) arr_32 [(unsigned char)6] [i_16] [12])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_17))) ? (((/* implicit */int) ((unsigned char) var_16))) : (((var_10) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_11))))))))))));
            var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((arr_24 [(_Bool)1] [i_16] [i_16] [12LL] [i_16]) + (((arr_33 [i_4] [i_4] [i_16]) / (arr_33 [i_4] [i_16] [i_16]))))))));
            var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) arr_34 [i_4] [i_16]))));
        }
        arr_45 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_4] [i_4])) ? (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)56)), ((unsigned short)30)))), (((var_13) / (var_13)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-9223372036854775804LL)))) ? (-6234349966187948985LL) : (((((/* implicit */_Bool) 262138LL)) ? (arr_21 [(_Bool)1] [11LL] [i_4] [i_4] [(_Bool)0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    }
    var_56 ^= ((/* implicit */signed char) var_15);
    var_57 &= ((/* implicit */unsigned short) (((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_58 ^= ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (var_4))) > (((/* implicit */int) ((signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) ((var_10) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (unsigned short)7676)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) (_Bool)1)) | (var_4)))))));
}
