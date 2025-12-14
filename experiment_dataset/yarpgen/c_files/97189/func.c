/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97189
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
    var_14 = ((/* implicit */long long int) var_0);
    var_15 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(((/* implicit */int) (unsigned short)56058)))) : (max((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0])))));
        var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2227886763960615528ULL))))) : (var_11))));
        var_18 = ((/* implicit */unsigned short) 3098369795U);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) 1196597493U));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] |= max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) && (((/* implicit */_Bool) (short)13637))))), (min((var_9), (min((((/* implicit */unsigned short) var_13)), ((unsigned short)9344))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((8335562577793049028LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12471))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */unsigned int) ((int) var_13))) : (min((((/* implicit */unsigned int) (unsigned short)28682)), (var_2))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_14 [i_4 + 3] [i_4] [i_4 - 1] [i_4] [i_4] [i_4 + 2])) ? (arr_14 [i_4 + 2] [i_4 + 3] [i_4 + 3] [(unsigned short)6] [i_4] [(short)5]) : (arr_14 [i_4 + 3] [i_4 + 2] [i_4] [i_4 + 1] [2] [i_4])))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_4 + 2])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_4 + 1]))))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned short)65524)))), (((/* implicit */int) (short)-22260))))) ? (15460618591722754018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29621))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) var_5);
        var_23 -= ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) arr_16 [i_5])) ? (15460618591722754018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((short) arr_18 [i_5 + 1])))))));
        var_24 &= ((/* implicit */unsigned char) ((int) var_8));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_25 = ((/* implicit */int) min((var_25), ((-(arr_17 [i_5 + 2])))));
            var_26 = arr_17 [i_5];
            var_27 = ((/* implicit */int) ((unsigned short) ((((1549198379) % (((/* implicit */int) arr_16 [i_6])))) - (((/* implicit */int) arr_16 [i_6])))));
        }
        arr_21 [8] = ((/* implicit */int) min((max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_2))), (((/* implicit */unsigned int) min((-729064553), (((/* implicit */int) arr_18 [i_5]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_17 [i_5]), (arr_17 [(unsigned short)0])))) ? (((/* implicit */int) arr_18 [i_5 + 1])) : ((+(((/* implicit */int) (signed char)-116)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned short) var_5);
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((15460618591722754018ULL), (((/* implicit */unsigned long long int) 1196597512U)))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_27 [i_10] [i_10] [4U] [(unsigned short)6])))))))) ? (max((((/* implicit */long long int) arr_28 [i_7] [i_7 + 2])), (var_6))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_29 += (-(((/* implicit */int) ((unsigned char) (unsigned short)57972))));
                        var_30 = ((/* implicit */long long int) arr_31 [i_7] [i_7 + 2] [i_7 - 1] [i_8 - 2] [i_10] [(signed char)22]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            for (unsigned char i_12 = 3; i_12 < 21; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) arr_28 [i_12 - 1] [i_12 + 1]);
                        var_32 = ((/* implicit */unsigned char) (+(max((var_0), (((/* implicit */int) (signed char)97))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 1; i_14 < 19; i_14 += 2) 
                        {
                            arr_45 [i_7] [i_11] [i_12 - 1] [i_12] [i_14 - 1] [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 1196597500U)), (2986125481986797587ULL)));
                            arr_46 [i_12] [(unsigned short)3] [13LL] [i_11] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)12471)) == (((/* implicit */int) var_7))))) : (((/* implicit */int) ((short) (signed char)-86)))))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (var_3)))));
                            var_33 = ((/* implicit */long long int) arr_27 [i_7] [(unsigned char)8] [i_7] [i_7 + 1]);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? ((~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7 - 1])))) : ((+(((/* implicit */int) arr_18 [i_7 - 1]))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            var_35 &= ((/* implicit */signed char) var_0);
                            var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_4)))));
                            var_37 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)81))) ? (((/* implicit */int) ((unsigned char) (unsigned char)148))) : (((/* implicit */int) ((unsigned char) (unsigned char)231))))));
                            var_38 = min(((((!(((/* implicit */_Bool) arr_32 [i_7] [i_13])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [13ULL] [i_11] [i_11])) & (((/* implicit */int) (unsigned short)9361))))) : (max((((/* implicit */unsigned int) arr_36 [i_11])), (3098369795U))))), (((/* implicit */unsigned int) var_9)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        for (int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            {
                                arr_54 [i_12] [(signed char)22] [i_12 - 3] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) + (((/* implicit */int) ((short) arr_52 [i_7] [(short)0])))))) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_7))));
                                var_39 += ((min((598129477), (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)23240)) : (((/* implicit */int) (short)29637)))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-49))))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) (unsigned short)63368)))));
                            }
                        } 
                    } 
                    var_40 ^= ((/* implicit */short) ((unsigned short) ((unsigned short) (unsigned short)2167)));
                    /* LoopSeq 2 */
                    for (signed char i_18 = 1; i_18 < 20; i_18 += 1) 
                    {
                        arr_58 [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_11))) ? (-798430833) : (arr_19 [i_12 + 1])));
                        arr_59 [i_7 - 1] [i_7 - 1] [i_7] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_18 [i_18 + 1]))) * (((/* implicit */int) arr_51 [(unsigned short)0] [i_11] [i_12] [i_12] [i_18]))));
                    }
                    for (long long int i_19 = 3; i_19 < 20; i_19 += 2) 
                    {
                        arr_63 [(unsigned short)11] [i_12] [(unsigned short)15] = ((/* implicit */int) ((short) (+(((/* implicit */int) (short)-3707)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_20 = 3; i_20 < 22; i_20 += 2) 
                        {
                            arr_67 [(signed char)20] [i_11] [i_11] [i_11] [i_12] [(unsigned char)13] [i_11] = (~(798430850));
                            var_41 = ((/* implicit */unsigned short) arr_64 [i_20] [i_12] [i_12] [i_12] [i_7]);
                            var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                            var_43 = ((/* implicit */short) var_8);
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_3)))))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) 
                        {
                            var_45 = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)32766)), (var_1)))) < (((/* implicit */int) ((short) var_11)))));
                            var_46 = ((/* implicit */unsigned int) (short)-6151);
                        }
                        var_47 ^= ((/* implicit */long long int) (short)-19371);
                    }
                    var_48 ^= ((/* implicit */int) (~(min((((/* implicit */long long int) arr_55 [i_7] [i_11] [i_12 - 2] [i_11] [i_11])), (var_6)))));
                }
            } 
        } 
    }
    var_49 = ((/* implicit */int) min((((/* implicit */short) (signed char)20)), (var_13)));
}
