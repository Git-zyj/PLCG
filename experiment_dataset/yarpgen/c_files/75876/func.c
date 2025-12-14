/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75876
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
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_1] [(_Bool)1] = ((/* implicit */int) ((unsigned short) (unsigned short)41597));
            var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 3])) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (arr_0 [i_0 - 3] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) (unsigned short)36733)) : (-937990293))) : (((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 - 2]) != (arr_0 [i_0 + 1] [i_0 - 1]))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_11 ^= ((/* implicit */int) ((short) ((((/* implicit */_Bool) -937990290)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)23939)))));
                var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)23928)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */int) (unsigned short)2850))))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) arr_2 [i_0]);
                            arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3147497928310835570LL)) ? (((/* implicit */int) (unsigned short)12637)) : (1000550510)));
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */long long int) ((arr_1 [i_4 + 1]) ^ (arr_17 [i_4 - 1] [i_4 + 1] [10] [10] [i_4 - 1] [i_0 - 1])));
            }
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_22 [i_0 + 1] [(unsigned char)0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [(_Bool)0]))))) ? ((~(((/* implicit */int) (unsigned short)23938)))) : (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_2] [i_7])))));
                arr_23 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(arr_0 [i_0 - 2] [i_0 - 2])));
            }
        }
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_8] [i_8])) ? (arr_9 [i_0] [6] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27479))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [0])) ? (arr_12 [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3]) : (((/* implicit */int) (signed char)40)))))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_8]))) * (arr_7 [i_8] [i_8] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)41596), (((/* implicit */unsigned short) (signed char)127))))))))));
            var_16 &= (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_8] [i_8] [i_8]))))))));
            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)29401))));
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (unsigned short)23931)) ? (arr_7 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))))), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)32767)))))));
            var_19 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3201679293U)))))) % ((-(arr_9 [i_0] [i_0] [i_9]))))), (((/* implicit */long long int) arr_12 [i_9] [9U] [i_0] [i_9]))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_20 &= max((arr_21 [i_9] [i_9] [i_10] [i_10]), (((((((/* implicit */long long int) arr_33 [i_0] [i_9] [i_9] [0] [i_10] [i_11])) & (-3147497928310835571LL))) >> (((290955097) - (290955086))))));
                        var_21 &= min((((/* implicit */unsigned int) (((~(1933602949))) ^ ((~(((/* implicit */int) (unsigned short)17306))))))), (25690246U));
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(arr_24 [i_10])))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (485402213031175903LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)63657)))))) >> (((((/* implicit */int) (unsigned short)14872)) - (14854)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_41 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)38565))))))) ? ((~((~(((/* implicit */int) arr_2 [i_0 - 2])))))) : (((/* implicit */int) arr_2 [i_13])));
                        var_23 = ((/* implicit */long long int) ((max((((-63419950) ^ (((/* implicit */int) (unsigned short)9469)))), (((/* implicit */int) (signed char)7)))) ^ ((~((~(-937990277)))))));
                    }
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_14] [i_0] [i_14])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (short)-4633))))) ? (max((arr_24 [(_Bool)1]), (1522346501))) : ((+(((/* implicit */int) (signed char)-114))))))), (3147497928310835577LL)));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46976)) + (((((/* implicit */_Bool) (unsigned short)14872)) ? (((/* implicit */int) (short)-4772)) : (arr_0 [i_0] [i_14])))))) ? (((((549751619584LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50647))))) ? (((/* implicit */int) (_Bool)0)) : (arr_17 [i_0 - 1] [i_0 - 2] [i_0] [i_14] [i_0 - 2] [i_0 + 1]))) : ((~((+(((/* implicit */int) (short)-29400))))))));
            arr_44 [i_14] [i_14] = min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-22370)) ? (-1824411720) : (((/* implicit */int) arr_42 [i_0])))), (((((/* implicit */int) (unsigned short)14445)) ^ (((/* implicit */int) arr_26 [i_0]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 937990281)) : (arr_38 [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_14])) != (16979111671321616641ULL))))))));
            arr_45 [i_14] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(arr_17 [i_0] [(unsigned short)3] [i_0] [i_14] [(_Bool)1] [i_0 - 3])))) ? (((((/* implicit */_Bool) (unsigned short)23921)) ? (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [(unsigned char)9] [i_14] [i_14] [i_14])) : (1890862971U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_14] [i_14])))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            arr_49 [i_0 - 3] [i_15] = ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) (unsigned short)23938))))))));
            var_26 *= ((/* implicit */signed char) (-(max((max((arr_36 [i_0 - 1] [i_0] [i_0]), (((/* implicit */long long int) 2147483639)))), (((/* implicit */long long int) min((((/* implicit */int) arr_40 [i_0] [(_Bool)1] [i_15 + 1])), (arr_12 [i_15] [i_15 + 1] [i_15] [i_15]))))))));
            var_27 = ((/* implicit */int) 3480740399091851163ULL);
            var_28 -= ((/* implicit */short) ((((/* implicit */unsigned int) -937990293)) > (901313197U)));
            var_29 -= ((/* implicit */int) max((((/* implicit */unsigned int) (short)14336)), (1093288002U)));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -8914622645184466782LL))));
            var_31 = (((!((_Bool)1))) ? ((+(arr_24 [i_0 - 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -5093937198915754449LL))))));
        }
    }
    for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((3309692625307088811LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)37766)) >= (((/* implicit */int) (unsigned short)407))))) : (-1001869396))), (min(((((_Bool)1) ? (((/* implicit */int) (short)22059)) : (arr_53 [i_17]))), (((/* implicit */int) (unsigned short)31))))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(-6205367253786150229LL))))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((!(((/* implicit */_Bool) -937990300)))) || (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (short)29410)))))))))));
    }
    for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
    {
        arr_57 [i_18] = ((/* implicit */long long int) 1093288002U);
        arr_58 [i_18] = ((/* implicit */unsigned short) (((+((-(arr_56 [i_18]))))) - ((+(((/* implicit */int) arr_54 [i_18]))))));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 23; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 2) 
                        {
                            {
                                var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1258311994)))) ? (max((arr_65 [i_18] [i_18] [i_18]), (arr_65 [i_18] [i_19 - 1] [i_18]))) : ((~(arr_68 [i_18] [i_19] [i_21])))));
                                arr_69 [i_19] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_55 [i_21] [i_21])) ? (((/* implicit */int) arr_54 [i_18])) : (arr_68 [i_18] [i_20] [i_20]))))) != (((/* implicit */int) arr_60 [i_18]))));
                                arr_70 [i_19] = ((/* implicit */unsigned long long int) (+((+(((arr_61 [i_18] [i_18]) ? (((/* implicit */int) (_Bool)1)) : (0)))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */short) ((unsigned short) ((((min((((/* implicit */int) arr_60 [i_19])), (arr_65 [i_18] [i_18] [i_18]))) + (2147483647))) << (((((/* implicit */int) max(((short)-14863), ((short)32754)))) - (32754))))));
                }
            } 
        } 
        arr_71 [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_65 [i_18] [i_18] [i_18]))));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 25; i_23 += 1) 
        {
            for (long long int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_78 [i_23] [i_23] = arr_59 [i_18] [i_24] [i_25];
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_60 [i_23]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_75 [i_18] [i_18] [(_Bool)1] [i_23])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_55 [i_25] [i_23])))) == ((-(((/* implicit */int) (unsigned short)65134))))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -2151482511341867419LL))))))));
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned int) var_7);
    var_39 = (+(((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_7)))) : ((((_Bool)1) ? (var_9) : (((/* implicit */int) (short)-1)))))));
    var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65141)), ((-2147483647 - 1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (short)-1))))) > (-7458439232137339883LL)));
}
