/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66210
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_12))));
            var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)65529)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))));
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) | (15782564893380408738ULL)));
            var_24 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (var_4)));
        }
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_9)))) >> (((((-1120810391) / (((/* implicit */int) (short)-17408)))) - (64363)))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((+(var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        }
        var_27 = var_3;
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_13))));
                        var_29 ^= ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
        } 
        var_30 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_3))) << ((((~(var_17))) - (8292629872882844917LL)))));
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_31 = ((/* implicit */long long int) var_14);
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_14))));
        var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2064398945U))));
    }
    /* LoopSeq 4 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)31)) : (-1525492148)))) ? (var_6) : ((~(((/* implicit */int) var_15))))))));
            var_34 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)255));
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            var_35 ^= ((/* implicit */signed char) -1525492148);
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_36 = (+(((/* implicit */int) (_Bool)1)));
                arr_36 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */unsigned char) -1525492148);
                var_37 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) -188013773)))));
            }
            for (short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_6))));
                arr_41 [i_8] [i_8] [i_8] [i_12] = ((/* implicit */unsigned int) ((unsigned char) 1804364439));
                /* LoopSeq 3 */
                for (signed char i_13 = 2; i_13 < 7; i_13 += 3) /* same iter space */
                {
                    var_39 = ((/* implicit */long long int) var_15);
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)67))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) var_14)))))));
                }
                for (signed char i_14 = 2; i_14 < 7; i_14 += 3) /* same iter space */
                {
                    arr_50 [0LL] &= ((/* implicit */unsigned int) ((var_17) - (((/* implicit */long long int) var_0))));
                    var_41 = (signed char)120;
                    arr_51 [i_8] [i_10] [i_12] = ((/* implicit */unsigned char) var_18);
                    var_42 = ((/* implicit */signed char) 2113929216U);
                }
                for (signed char i_15 = 2; i_15 < 7; i_15 += 3) /* same iter space */
                {
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_13))));
                    var_44 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_14))))) : (1525492148)));
                }
            }
        }
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) -6561451017804829827LL)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) (unsigned char)130)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))));
        var_46 = ((/* implicit */unsigned int) var_4);
        var_47 = ((/* implicit */unsigned long long int) var_14);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            var_48 += ((/* implicit */unsigned char) ((signed char) (signed char)-39));
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 6; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned int) var_5);
                            var_50 = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
            } 
            var_51 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29040))) : (var_19)));
        }
        for (int i_20 = 0; i_20 < 10; i_20 += 2) 
        {
            var_52 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-1416)), (var_6)));
            var_53 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) > (var_19)));
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    var_54 += ((/* implicit */_Bool) 1411018305);
                    var_55 = ((/* implicit */_Bool) -838313601);
                    arr_74 [i_8] [i_20] [4U] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)0))));
                }
                arr_75 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (1525492147) : (((((/* implicit */_Bool) (short)-1416)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)120))))));
            }
        }
        for (short i_23 = 1; i_23 < 7; i_23 += 2) 
        {
            var_56 += var_18;
            arr_78 [i_8] [i_8] = var_16;
            var_57 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-29044)) ? (((/* implicit */int) var_2)) : (var_6))));
        }
    }
    for (signed char i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 2; i_25 < 9; i_25 += 4) 
        {
            for (signed char i_26 = 0; i_26 < 10; i_26 += 2) 
            {
                {
                    var_58 ^= ((/* implicit */unsigned char) (+(var_6)));
                    var_59 = ((/* implicit */signed char) var_11);
                    arr_87 [i_25] [8] [i_26] [i_25] = ((/* implicit */int) ((max((min((var_8), (((/* implicit */unsigned long long int) (signed char)-76)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)39))))))) | (((/* implicit */unsigned long long int) ((1307967696U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49256))))))));
                    /* LoopNest 2 */
                    for (signed char i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        for (short i_28 = 1; i_28 < 8; i_28 += 1) 
                        {
                            {
                                var_60 = ((/* implicit */int) var_2);
                                var_61 = ((/* implicit */unsigned int) ((-9223372036854775804LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_6)) : (var_3))))));
                                arr_92 [i_28 + 1] [i_27] [i_27] [i_27] [i_24] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) != (((/* implicit */int) var_9))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_19)))))))), (((((/* implicit */_Bool) 14390191654401983124ULL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)19797)) : (((/* implicit */int) (unsigned char)164)))) : (((/* implicit */int) (signed char)-105))))));
                            }
                        } 
                    } 
                    var_62 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)39))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_29 = 4; i_29 < 8; i_29 += 2) 
        {
            for (unsigned long long int i_30 = 1; i_30 < 8; i_30 += 2) 
            {
                {
                    var_63 = ((/* implicit */int) ((unsigned short) var_17));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_31 = 0; i_31 < 10; i_31 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_32 = 0; i_32 < 10; i_32 += 2) 
                        {
                            arr_103 [i_24] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)248))));
                            var_64 &= (~(((/* implicit */int) ((var_6) >= (((/* implicit */int) (unsigned short)65535))))));
                            arr_104 [i_24] [i_29 + 1] [i_30 - 1] [i_31] [i_32] [i_31] = var_4;
                        }
                        var_65 ^= ((/* implicit */unsigned int) var_14);
                        /* LoopSeq 2 */
                        for (int i_33 = 3; i_33 < 9; i_33 += 1) /* same iter space */
                        {
                            var_66 = ((/* implicit */unsigned long long int) var_14);
                            arr_107 [i_24] [i_24] [i_24] [i_24] [i_31] = ((/* implicit */unsigned short) var_8);
                        }
                        for (int i_34 = 3; i_34 < 9; i_34 += 1) /* same iter space */
                        {
                            var_67 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-123));
                            var_68 = ((/* implicit */unsigned short) 568822681);
                            var_69 += ((/* implicit */short) (~(((/* implicit */int) (unsigned short)39727))));
                            var_70 = ((/* implicit */signed char) var_7);
                        }
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_35 = 0; i_35 < 11; i_35 += 4) 
    {
        var_71 ^= ((/* implicit */short) (signed char)-39);
        arr_113 [i_35] = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
    }
    for (signed char i_36 = 0; i_36 < 15; i_36 += 1) 
    {
        var_72 *= ((/* implicit */unsigned char) var_17);
        /* LoopNest 2 */
        for (int i_37 = 0; i_37 < 15; i_37 += 2) 
        {
            for (unsigned short i_38 = 0; i_38 < 15; i_38 += 4) 
            {
                {
                    var_73 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-29040)), ((unsigned short)57320)))) ? (((/* implicit */unsigned int) (+(var_4)))) : (((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */unsigned long long int) 1525492136)) : (((var_8) % (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
                    var_74 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -32180233)), (var_0)))) & ((~(14390191654401983144ULL)))))));
                }
            } 
        } 
    }
    var_75 = ((/* implicit */unsigned int) var_10);
}
