/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60601
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))), (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_2))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_19))))))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) var_14))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0)))))) && (((_Bool) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))));
        var_20 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) (unsigned char)0)) || (var_19))) || (((/* implicit */_Bool) var_8))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9)))))))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)101))));
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) 11904995324664971610ULL)))));
                        arr_18 [i_3] [i_3] [6LL] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-54)))) ? (((/* implicit */int) ((short) var_13))) : (((((/* implicit */int) var_15)) + (((/* implicit */int) var_6))))));
                    }
                } 
            } 
            arr_19 [i_3] [i_3] = ((signed char) var_17);
            var_24 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (signed char)-101)) + (2147483647))) << (((((/* implicit */int) (unsigned short)41711)) - (41711)))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((_Bool) var_0)))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6)))))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_16))) - (((/* implicit */int) var_5)))))));
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_5))) - (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))));
            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) 108086391056891904ULL)))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((long long int) (unsigned char)0)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (unsigned short)50828)))));
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                arr_32 [i_2] [i_2] [i_2] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-53)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (15705427727205812614ULL)));
                arr_33 [i_2] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) var_14)));
                arr_34 [i_8] [i_8] [i_9] = ((((unsigned long long int) 3524556701637611492ULL)) << (((((/* implicit */int) var_14)) & (((/* implicit */int) var_12)))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((_Bool) ((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_1)))) || ((_Bool)0)));
                /* LoopNest 2 */
                for (long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_42 [i_2] [i_8] [i_8] [(signed char)4] [i_10] [i_8] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (signed char)61)) ^ (((/* implicit */int) (short)-32)))) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    arr_46 [i_2] [i_8] [i_10 + 1] [i_13] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) var_5))))));
                    arr_47 [i_8] [i_8] [i_8] [i_8] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_7)) ? (11677635410776329461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-12705)) != (((/* implicit */int) (unsigned char)11)))))));
                }
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((short) (_Bool)0)))));
                    arr_50 [i_8] = (_Bool)1;
                    var_36 = ((/* implicit */unsigned long long int) var_9);
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) + (var_16))));
                            arr_62 [i_8] = ((/* implicit */_Bool) ((short) var_2));
                            arr_63 [i_2] [9ULL] [9ULL] [i_8] [i_2] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
                arr_64 [3ULL] [i_8] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)49707))));
            }
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((var_4) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3840))) + (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_17)))))))));
        }
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (~(var_16))))));
        var_41 = ((/* implicit */_Bool) var_11);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 4) 
    {
        for (short i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            {
                arr_71 [i_18] = ((/* implicit */signed char) min((((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))), (((_Bool) (_Bool)1))));
                var_42 = (~(min((((/* implicit */unsigned long long int) ((_Bool) var_6))), ((~(108086391056891904ULL))))));
                /* LoopNest 3 */
                for (signed char i_20 = 3; i_20 < 22; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned long long int i_22 = 4; i_22 < 22; i_22 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */signed char) max((var_43), (var_12)));
                                var_44 = ((/* implicit */signed char) (unsigned short)0);
                                var_45 = ((/* implicit */unsigned long long int) min((var_45), (max((min((((/* implicit */unsigned long long int) (unsigned short)65507)), (2741316346503739001ULL))), (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_23 = 1; i_23 < 22; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_25 = 2; i_25 < 21; i_25 += 3) 
                            {
                                arr_89 [i_24] [i_24] [i_18] [i_24] [(unsigned char)14] [i_24] [i_24] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_14))))));
                                var_46 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-512))));
                                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) var_5))));
                            }
                            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                            {
                                arr_94 [i_18] [i_19] [i_19] [i_18] [i_24] [i_18] [i_18] = ((/* implicit */unsigned char) ((signed char) max((var_3), (((/* implicit */unsigned long long int) var_6)))));
                                arr_95 [i_26] [i_26] [i_18] [i_26] [i_26] [i_26] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((short) var_7))) | (((/* implicit */int) var_19)))), ((~((~(((/* implicit */int) (unsigned short)16124))))))));
                            }
                            arr_96 [i_24] [i_24] [i_18] [(signed char)16] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                arr_97 [i_18 + 1] [i_18] [i_18] = ((/* implicit */short) ((unsigned short) ((long long int) (+(((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_48 = (!(((/* implicit */_Bool) (~(((var_19) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (short)-29941))))))));
}
