/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91973
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [(signed char)5] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0] [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)130))));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned char)111))));
            var_19 &= (+(783074597913271200ULL));
        }
        for (long long int i_3 = 2; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                arr_14 [i_1] = ((/* implicit */signed char) (unsigned char)222);
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_5 - 3]))))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
                    var_21 ^= ((/* implicit */unsigned char) (short)2844);
                }
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_16 [8ULL] [i_3] [i_3] [(unsigned char)4])) : (((/* implicit */int) arr_17 [i_4] [i_3] [i_1] [7ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned short)8285)) : (((/* implicit */int) (short)1792))))) : ((-(11423018207074169759ULL)))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
            {
                arr_23 [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)1))))));
                arr_24 [(signed char)6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_6 - 2]))));
                arr_25 [i_1] [(_Bool)1] [i_6] &= ((/* implicit */long long int) (~((+(783074597913271214ULL)))));
            }
            for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
            {
                arr_28 [i_1] [i_1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3197380996920359697LL)) ? (((/* implicit */int) (_Bool)0)) : (arr_15 [(signed char)3] [i_3])))) ? (((((/* implicit */_Bool) 11423018207074169759ULL)) ? (arr_19 [i_1] [i_3 - 1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))) : (((/* implicit */long long int) ((int) (unsigned char)233))));
                arr_29 [i_7] [i_3] [i_7] = ((/* implicit */long long int) ((unsigned short) ((long long int) (unsigned short)16384)));
            }
            for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 2) /* same iter space */
            {
                arr_34 [i_1] [i_3 - 2] [i_8 - 1] [(signed char)8] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_8] [4LL])))))));
                var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [17LL] [17LL] [(short)1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [16LL] [i_8])) : (((/* implicit */int) (signed char)-86))))) ? (arr_27 [i_1] [i_3] [i_3 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5543005525882641995ULL))))))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)161))));
                            var_25 = ((/* implicit */unsigned long long int) arr_18 [i_10] [i_9] [5LL] [i_3] [i_1]);
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_27 = ((/* implicit */signed char) 121093295152984512ULL);
                    var_28 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-109))));
                    arr_44 [i_1] [i_8] [i_3] [14U] [i_11] [i_3] = ((/* implicit */signed char) ((_Bool) (-(5543005525882641995ULL))));
                    arr_45 [i_3] [i_8] [i_11] = ((/* implicit */unsigned char) 10384934042236817556ULL);
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((_Bool) 4080));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) : (((((/* implicit */_Bool) 14912110634839011922ULL)) ? (18325650778556567104ULL) : (783074597913271200ULL))))))));
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                {
                    arr_51 [i_1] [(signed char)17] [i_8] [0U] = ((/* implicit */signed char) 12549825758822418939ULL);
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (unsigned char)143))));
                    arr_52 [i_3 + 1] [20] [i_13] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)143));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((unsigned short) ((signed char) 12549825758822418947ULL))))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((short) (unsigned char)100))) : (((/* implicit */int) ((unsigned char) (unsigned char)83)))));
                }
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) 8061810031472734060ULL))));
            }
            for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */short) ((signed char) (-(8061810031472734060ULL))));
                arr_56 [i_14] = ((/* implicit */short) (unsigned char)142);
            }
        }
        var_36 = ((/* implicit */int) (~(((((/* implicit */_Bool) 12549825758822418947ULL)) ? (254LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [10LL] [10LL] [10LL] [10LL])))))));
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                {
                    arr_63 [i_15] [i_15] [i_15] [i_15] &= ((/* implicit */signed char) ((short) 254LL));
                    var_37 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_62 [(signed char)5] [8ULL] [i_15] [i_16])) ? (94873902U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_1]))))));
                    var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL))));
                    /* LoopSeq 3 */
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) (-(12549825758822418941ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1143544750)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14375))) : (-82742115215376452LL)))) : (12549825758822418922ULL))))));
                        arr_67 [i_1] [4LL] [i_16] [(signed char)20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned short)14] [i_15] [4LL] [i_17])) ? (((/* implicit */int) arr_57 [i_1] [i_1])) : (1143544757)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned short)12]))))) : (((((/* implicit */_Bool) arr_65 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)8))))));
                    }
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) -1143544757);
                        var_41 ^= ((/* implicit */long long int) arr_70 [i_16] [i_15] [i_16] [i_18] [i_15]);
                    }
                    for (signed char i_19 = 2; i_19 < 18; i_19 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            arr_78 [i_1] [i_19] [i_16] [i_19] [i_19] [i_20] = ((/* implicit */unsigned short) (short)32767);
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_19 [(unsigned short)12] [i_15] [i_16] [i_19]))));
                        }
                        arr_79 [i_1] [i_16] [i_19] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)55279)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_43 [17LL] [17LL] [i_15] [17LL]))))));
                        arr_80 [i_1] [i_15] [i_19] [i_19] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_70 [i_1] [i_1] [i_15] [12LL] [i_19]))))));
                        var_43 = ((/* implicit */_Bool) (-(5896918314887132694ULL)));
                        arr_81 [i_1] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_1] [i_15] [i_16] [i_16])) ? (((long long int) (signed char)127)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_1] [i_15] [0] [(unsigned char)9])) ? (((/* implicit */int) arr_73 [(unsigned short)5] [i_15] [(unsigned char)20] [i_19])) : (((/* implicit */int) (unsigned char)23)))))));
                    }
                }
            } 
        } 
    }
    var_44 = ((/* implicit */signed char) var_7);
    var_45 &= ((/* implicit */signed char) (-(var_1)));
    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : ((~(var_1)))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_14)))))) : (var_5))))));
}
