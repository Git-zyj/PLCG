/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98231
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_15 &= ((signed char) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)));
        var_16 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) % (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (101399409))), (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_1 [i_0] [10LL])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((3622342299U), (((/* implicit */unsigned int) -1797116514))))), (var_10)))) || (((/* implicit */_Bool) (short)15143))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_1 [(unsigned char)7] [i_1])))), (((((_Bool) 1058574847890962413LL)) && (((/* implicit */_Bool) var_2))))));
        var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((arr_5 [i_1]) << (((arr_0 [i_1]) - (2705496490397720406LL))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) arr_1 [i_2 - 1] [i_2 + 1])))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    arr_16 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((unsigned int) (signed char)-66)))) || (((/* implicit */_Bool) arr_0 [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_20 [i_3] [i_2] = ((/* implicit */unsigned char) (+(-7617836846356224865LL)));
                        arr_21 [i_2] [i_2] [i_5] [(unsigned char)7] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_2] [(unsigned short)9] [i_1] [(_Bool)1] [(unsigned short)9])) ? (-7617836846356224867LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_19 *= ((((/* implicit */_Bool) ((((-3519605307847476356LL) + (9223372036854775807LL))) >> (((-7617836846356224865LL) + (7617836846356224870LL)))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)7] [5] [i_2 - 1]))));
                        var_20 = ((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned char)255))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))))));
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)10787)) ? (11857481612370745953ULL) : (4503599627370495ULL))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 2116062289520160776ULL))))), (((((/* implicit */_Bool) 1843471293)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)50)))))))));
                        var_22 = ((/* implicit */int) var_0);
                    }
                }
                var_23 = ((/* implicit */signed char) 2116062289520160775ULL);
            }
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) (+((-(var_3)))));
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 15; i_8 += 2) 
                {
                    arr_32 [i_2] = max((((long long int) (-(((/* implicit */int) var_7))))), (((/* implicit */long long int) min((((/* implicit */short) arr_29 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8])), ((short)-4358)))));
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (unsigned short)7171);
                        arr_35 [i_1] [i_1] [i_2] [i_7] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7166)) >> (((1843471293) - (1843471273)))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 1) 
                    {
                        arr_38 [i_7 - 1] [i_2] [13] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65490))))), (1410205663U)))) ? ((-(((/* implicit */int) (unsigned short)33002)))) : (((((/* implicit */int) (short)8326)) * (((/* implicit */int) (unsigned char)192))))));
                        arr_39 [i_2] [i_2] [i_7] [i_7] [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) (unsigned short)19939)))), (max((-737874827), (((/* implicit */int) arr_9 [i_1] [i_2] [i_7])))))), (min((((/* implicit */int) ((short) -423189886))), (min((((/* implicit */int) var_6)), (arr_8 [i_1] [4LL] [i_10])))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)58365)))) < (((((/* implicit */_Bool) arr_10 [i_10 - 2] [i_8 - 1] [i_2 - 1])) ? (((1843471293) % (((/* implicit */int) (unsigned short)46085)))) : (((((/* implicit */int) (unsigned short)46)) + (var_5))))))))));
                    }
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        arr_42 [2LL] [i_1] [i_7] [i_2] [i_8 - 1] = ((/* implicit */short) arr_0 [i_11]);
                        arr_43 [i_1] [(unsigned char)8] [1LL] [i_1] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_9 [i_11 - 1] [i_8 - 1] [i_2 - 1])) >> (((((/* implicit */int) (short)14956)) - (14953))))));
                        var_27 = ((/* implicit */long long int) (signed char)27);
                        var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 691296434)))) < (((unsigned long long int) var_12)))) ? (((unsigned long long int) (signed char)-116)) : (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (short)30851)), (arr_37 [i_11] [i_11 - 1]))), (var_8))))));
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19939)) ? (((/* implicit */int) arr_19 [i_7] [i_2])) : (((/* implicit */int) var_0))))), (6311893278229449205LL))) << (((((max((-6053045913421756245LL), (arr_0 [i_1]))) - (((/* implicit */long long int) ((int) arr_12 [10LL] [i_2] [i_7]))))) - (2705496490397696147LL)))));
                        var_30 = ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [14LL] [i_2] [i_2 - 1] [i_2]))) / (((((/* implicit */_Bool) ((long long int) var_3))) ? (min((((/* implicit */long long int) 4294967295U)), (var_3))) : (arr_5 [i_1]))));
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_2] [i_8 - 1] [i_12] = ((/* implicit */short) arr_25 [i_1] [i_2 - 2] [i_7] [i_8 + 1]);
                    }
                }
                var_31 = var_3;
            }
            /* vectorizable */
            for (unsigned short i_13 = 1; i_13 < 14; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 2; i_14 < 12; i_14 += 1) 
                {
                    var_32 = ((/* implicit */signed char) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2021040515796586014LL))))));
                    var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)156))));
                }
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)149))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_13])) || (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) : (1179122243093601770ULL))))))));
                arr_52 [i_1] [i_2] [7LL] [i_2] = ((/* implicit */short) var_1);
            }
        }
        for (long long int i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            arr_55 [i_1] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_15] [i_1] [i_15])) ? (var_5) : (((/* implicit */int) arr_13 [i_1] [i_15] [i_1] [i_15]))))) ? (((/* implicit */int) arr_13 [i_1] [i_15] [i_1] [i_1])) : ((~(((/* implicit */int) arr_13 [i_1] [i_15] [i_1] [2]))))));
            var_35 = ((/* implicit */unsigned short) min(((~(((arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_15]) >> (((/* implicit */int) (signed char)0)))))), (((/* implicit */unsigned long long int) ((((-691296434) + (2147483647))) << (((((/* implicit */int) (short)14)) - (14))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
    {
        arr_58 [i_16] = ((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [i_16] [10LL] [i_16]);
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (var_10))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [0LL])) : (((/* implicit */int) arr_6 [i_16]))))))))));
        arr_59 [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (arr_8 [i_16] [i_16] [(unsigned short)9]) : (((/* implicit */int) (short)-1))));
    }
    var_37 = ((/* implicit */int) var_7);
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58370))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45599))) : (-6516449374891169207LL)));
}
