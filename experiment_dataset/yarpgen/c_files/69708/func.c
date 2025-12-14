/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69708
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18895)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18894))) : (var_2)))))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) ((short) ((unsigned short) (short)18895)))))))));
        var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? ((+(((/* implicit */int) (unsigned char)94)))) : (((/* implicit */int) ((unsigned short) (short)28681)))))) ? (((/* implicit */int) (short)-18899)) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18895))))))));
        var_12 = ((((/* implicit */unsigned int) ((int) ((_Bool) var_7)))) > (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-27168)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (unsigned short)40463);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1]))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned short)49152)))))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)81)), (arr_4 [i_1]))), (((/* implicit */unsigned short) (short)-18881))))) : (((((var_6) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8482633230735935650LL)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 &= ((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8912738553763617229LL)) ? (3961270141U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31399)))))) ? (arr_13 [i_5] [i_5] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)40484))))), ((unsigned char)53)))))));
                            var_16 = ((/* implicit */_Bool) (((_Bool)1) ? ((+((-(((/* implicit */int) (unsigned short)49162)))))) : (min((((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_2] [i_2]))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)31398)) > (((/* implicit */int) ((unsigned short) ((4294967282U) + (((/* implicit */unsigned int) var_0))))))));
        }
        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            arr_21 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)25055))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 3; i_8 < 20; i_8 += 4) 
            {
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8796093022207LL))))) : (((/* implicit */int) (short)-18892))))) ? (((/* implicit */int) ((((_Bool) var_2)) && (((/* implicit */_Bool) (~(var_0))))))) : (((/* implicit */int) var_9))));
                arr_24 [6LL] [i_7] [i_8] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned short)59214)) ? (var_6) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((_Bool) var_1))))) | (((/* implicit */long long int) (~(((((/* implicit */int) arr_20 [i_2] [12ULL])) ^ (((/* implicit */int) arr_7 [i_8])))))))));
                var_19 += ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218))))) == (min((((/* implicit */int) var_4)), (arr_16 [i_2] [i_7] [i_7] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_9 [i_2] [i_7] [(_Bool)1]))))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_6))) : (((/* implicit */long long int) (~(arr_22 [i_2] [i_2]))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-9925)) > (((/* implicit */int) (unsigned short)49172)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32362))) : (((((/* implicit */_Bool) (unsigned short)48461)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) : (3870306613U)))))) - ((~(max((((/* implicit */unsigned long long int) (short)-518)), (2342553494802975932ULL)))))));
            }
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)10714)))))));
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        {
                            var_22 |= min((((unsigned short) (!(((/* implicit */_Bool) var_2))))), (((/* implicit */unsigned short) (!((_Bool)1)))));
                            arr_34 [i_10] = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33179))) : (var_2))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2])))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20337)) ? (2580180807U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18895)))));
                            arr_35 [i_10] [i_7] [i_7] [(signed char)18] [i_10] [(unsigned short)7] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 18446744073709551601ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 744677437U)) ? (4294967040U) : (2444594090U)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-18894)) && (((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_11]))))), (min((((/* implicit */unsigned short) arr_15 [i_2] [i_7] [i_9] [i_10] [i_11])), ((unsigned short)38390))))))));
                        }
                    } 
                } 
            } 
        }
        arr_36 [i_2] = ((/* implicit */_Bool) 1623877531);
    }
    for (int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
        {
            var_24 *= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3409204777U)) : (18446744073709551601ULL)));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned short)10714)))) * (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)27480)))))))) ? (min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (short)1)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7156973466699899694LL)) ? (((/* implicit */int) arr_41 [i_12] [i_12])) : (((/* implicit */int) (unsigned short)56004)))))))))));
        }
        var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) var_0))))))))) >= ((~(-1182767167169333723LL)))));
        var_27 = ((/* implicit */unsigned short) ((short) ((_Bool) (unsigned short)45203)));
        var_28 |= ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)2123))) - (((long long int) arr_27 [i_12] [i_12] [(short)6] [i_12]))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
    {
        var_29 = (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_17 [i_14] [i_14] [i_14])) : (((/* implicit */int) (short)27482)))));
        arr_47 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) && (((/* implicit */_Bool) arr_31 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))));
        arr_48 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)))) ? (((/* implicit */int) ((_Bool) arr_46 [i_14]))) : (((/* implicit */int) (unsigned short)0))));
    }
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((((/* implicit */int) (short)-27494)) + (((/* implicit */int) (unsigned short)39292))))))), (((((/* implicit */_Bool) 14LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)13336)) : (((/* implicit */int) (signed char)-115))))) : (((((/* implicit */unsigned long long int) 3114771001U)) / (18446744073709551615ULL)))))));
    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4377695678431152187ULL))))), ((~(var_2)))))) ? (max((((/* implicit */int) ((unsigned short) (signed char)-1))), (((((/* implicit */_Bool) (unsigned short)47127)) ? (((/* implicit */int) (short)-23632)) : (-1072245360))))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_5)) - (4941))))))))));
}
